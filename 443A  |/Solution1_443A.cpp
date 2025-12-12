#include <iostream>
using namespace std;
int main(){
    string l;
    getline(cin,l);
    int n= l.length();
    int m=n;
    for(int i=0;i<n;i++){
        for(int j =i+1;j<n;++j){
        if((l[i]==l[j])&& (l[i]!=0)) {
            l[j]=0;
            m--;
        }
    }
    }
    if(n>4){
        cout<<m-4;
    }else cout<<n-2;

    return 0;
}