#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

     string s;
     char a;
     int count=1;
     cin>>s;
     for (char i :s){
        if(i==a){
            count++;
        }else{
            count=1;
            a=i;
        }
        if(count==7){cout<<"YES"; return 0;}
     }cout<<"NO";
     return 0;
}