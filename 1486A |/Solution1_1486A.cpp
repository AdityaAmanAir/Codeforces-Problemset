#include <iostream>
using namespace std;
int main(){
    int t,tt; cin>>t;
    while(t--){
        cin>>tt;
        bool yes=true;
        long long int sum=0,inn;
        for(int i=0; i<tt;i++){
            cin>>inn;
            if(inn+sum<i){
                yes=false;
            }sum+=inn-i;
        }
        cout<<((yes)?"YES\n":"NO\n");
        
    }
    return 0;
}