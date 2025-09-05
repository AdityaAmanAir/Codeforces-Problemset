#include<iostream>
#include<cmath>
using namespace std;
int main(){
long long int a,b;cin>>a>>b;
if(a-(a/2)>=b){
    cout<<2*b-1;
}else{
    cout<<(b-(a-(a/2)))*2;
}
    return 0;
}