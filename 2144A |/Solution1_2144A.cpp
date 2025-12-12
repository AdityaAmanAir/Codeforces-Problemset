#include <iostream>
using namespace std;
int main()
{
    int t, tt;
    cin >> t;
    while (t--)
    {
        int sum=0;
        cin >> tt;
        bool found = false;
        int arr[tt];

        for (int i = 0; i < tt; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        int r = 0, mr;
        for (int j = 0; j <= tt - 3 && found == false; j++)
        {
            r += arr[j];
            mr = r % 3;
            int l = 0, ml;
            for (int k = j + 1; k <= tt - 2 && found == false; k++)
            {
                l += arr[k];
                ml = l % 3;
                int leftover = sum - r - l;
                int mo = leftover % 3;
                if (mr == ml && mo == mr && mo == ml)
                {
                    cout << j + 1 << " " << k + 1 << "\n";
                    found = true;
                }
                if (mr != ml && mo != mr && mo != ml)
                {
                    cout << j + 1 << " " << k + 1 << "\n";
                    found = true;
                }
            }
        }

        if (found == false)
        {
            cout << 0 << " " << 0 << "\n";
        }
    }
    return 0;
}