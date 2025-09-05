#include <iostream>
using namespace std;
int main()
{
    long long t, count = 0;
    cin >> t;
    while (t)
    {
        if(t%10==4 || t%10==7){
            count++;   
        }
        t/=10;
    }cout<<((count==4 || count ==7)?"YES":"NO");
    return 0;
}