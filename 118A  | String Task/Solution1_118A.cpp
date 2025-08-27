#include <iostream>
using namespace std;
int main(){
    string a,b="";
    cin>>a;
    for(char i :a){
        if(i=='a' || i=='e'||i=='i' ||i=='o' ||i=='u' ||i=='A' ||i=='E' ||i=='I' ||i=='O' ||i=='U'|| i=='y'||i=='Y' ){

        }else{
            if(i>=65 && i<=90){
                i+=32;
            }
            b.append(".");
            b=b+(i);
        }
    }
    cout<<b;
    return 0;
}