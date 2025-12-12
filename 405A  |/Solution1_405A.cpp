#include <iostream>
using namespace std;
int main(){
    int a; cin>>a;
    int var[a];
    for(int i=0; i<a;i++){
        cin>>var[i];
    }
    for(int i=0;i<a;i++ ){
        for(int j=0; j<a;j++){
            if((var[i]>var[j])&& i<j){
                int temp=var[i];
                var[i]=var[j];
                var[j]=temp;
            }
        }
    }
    for(int i : var){
        cout<<i<<" ";
    }
    return 0;
}