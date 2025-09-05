#include<iostream>
using namespace std;
int main(){
    string s;
    int friends,temp;cin>>friends;
    int aa[friends];
    for(int i=0;i<friends;i++){
        cin>>temp;
        aa[temp-1]=i+1;
    }
    for(int i :aa){
        cout<<i<<" ";
    }

    return 0;
}