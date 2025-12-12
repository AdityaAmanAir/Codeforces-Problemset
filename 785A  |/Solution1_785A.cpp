#include<iostream>
using namespace std;
int main(){

    int a,s=0;cin>>a;
    char c[28];
    while(a--){
        cin>>c;
        
        if(c[0]=='I'){
            s+=20;
        }else if(c[0]=='C'){
            s+=6;
        }else if(c[0]=='T'){
            s+=4;
        }else if(c[0]=='D'){
            s+=12;
        }else if(c[0]=='O'){
            s+=8;
        }
    }
    cout<<s;


    return 0;
}