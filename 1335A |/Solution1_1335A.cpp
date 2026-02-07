#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        int a;cin>>a;
        if(a&1==1){
            cout<<a/2<<"\n";
        }else{
            cout<<(a-1)/2<<"\n";
        }
    }

    return 0;
}