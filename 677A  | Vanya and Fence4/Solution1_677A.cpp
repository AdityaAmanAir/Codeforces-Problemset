#include<iostream>
using namespace std;
int main(){
int t,height,friends=0;
cin>>t>>height;
int count=t;
while(t--){
    cin>>friends;
    if(friends>height){
        count++;
    }
}
cout<<count;

    return 0;
}