#include <iostream>
#include <vector>
using namespace std;
int main(){

    int t,k;
    cin>>t>>k;
    vector <int> myvec;
    while(t--){
        int a;
        cin>>a;
        myvec.push_back(a);
    }
    int count=0;

    for(int i : myvec){
        if(myvec[k-1]<=i && i!=0){
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}