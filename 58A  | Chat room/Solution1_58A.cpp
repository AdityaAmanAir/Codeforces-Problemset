#include<iostream>
using namespace std;
int main(){
int n=0;
string message, hello="hello";
getline(cin,message);
for (char i : message){
    if(i==hello[n]){
        if(n==4){cout<<"YES"; return 0;}
        n++;
    }
}cout<<"NO";
    return 0;
}