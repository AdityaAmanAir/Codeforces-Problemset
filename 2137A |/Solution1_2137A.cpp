#include<iostream>
using namespace std;
int main(){

int t,a,b;cin>>t;
for(int i =0; i<t;i++){
cin>>a>>b;

while(a--){
    b*=2;
}
// while(a--){
//     if((b-1)%3==0 && b!=1){
//         b=(b-1)/3;
//     }else{
//         b*=2;
//     }
// } 
// why this bunch of code is here ? : This is to remind me in future that how I over complicated a simple problem and made it real complex and can't solve!
 cout<<b<<"\n";

 }

    return 0;
}