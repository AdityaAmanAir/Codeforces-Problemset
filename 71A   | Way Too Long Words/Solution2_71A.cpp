#include <bits/stdc++.h> //by~ AdityaAmanAir
using namespace std;
     
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string a;
        getline(cin,a);
        int l =a.length();
     
        if(l>10){
            cout<<a[0]<<l-2<<a.back()<<"\n";
        }else{
            cout<<a<<"\n";
        }
    }
    return 0;
    }