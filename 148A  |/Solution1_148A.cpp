#include <iostream>
using namespace std;
int main(){

    int k,l,m,n,d,count =0;cin>>k>>l>>m>>n>>d;
    int arr_c[d+1] = {0};
    
    for(int i=0; i<=d; i+=k){
        arr_c[i]=1;
    }
    for(int i=0; i<=d; i+=l){
        arr_c[i]=1;
    }
    for(int i=0; i<=d; i+=m){
        arr_c[i]=1;
    }
    for(int i=0; i<=d; i+=n){
        arr_c[i]=1;
    }
    for(int i : arr_c){
        if(i==1){
            count++;
        }
    }
cout<<count-1;
    return 0;
}