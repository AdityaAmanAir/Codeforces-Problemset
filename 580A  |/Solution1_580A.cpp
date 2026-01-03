#include<iostream>
using namespace std;
int main(){
    int i;cin>>i;
    int count=0,max=1;
    int m,n=0;
    while(i--){
        cin>>m;
        if(m>=n){
            count++;
        }else{
            if(count>max){
                max=count;
            } count=1;
        }
        n=m;
    }if(count>max){
        cout<<count;
}else{
    cout<<max;
}
}