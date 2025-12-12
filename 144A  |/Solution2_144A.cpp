#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int a[n];
    int m=__INT_MAX__;
    int x=-1;
    int mi=0;
    int xi=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if (a[i]<=m){
            mi=i;
            m=a[i];
        }if (a[i]>x){
            xi=i;
            x=a[i];
        }
    }
    cout<<(xi+(n-mi-1)+((xi>mi)?-1:0));
    // cout<<endl<<x<<" "<<m<<" "<<mi<<" "<<xi;
    return 0;
}