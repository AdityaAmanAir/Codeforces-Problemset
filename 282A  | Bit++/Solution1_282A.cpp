#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int ans=0;
cin.ignore();
while(t--){
    string a;
    getline(cin,a);
    if((a=="++X" )||(a=="X++")){
        ++ans;
    }else{
        --ans;
    }
}
cout<<ans;
    return 0;
}