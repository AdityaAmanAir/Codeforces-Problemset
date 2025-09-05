#include<iostream>
using namespace std;
int main(){
    string s;
    int count=0;
    cin>>s;
    for (char i :s){
        if(i=='4'||i=='7'){
            count++;
        }
    }
    cout<<((count==4 || count ==7)?"YES":"NO");

    return 0;
}