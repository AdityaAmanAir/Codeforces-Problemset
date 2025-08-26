#include <iostream> //by~ AdityaAmanAir
using namespace std;
int main(){
    string a;
    getline(cin,a);
    int ci=0,c1=0,c2=0,c3=0;
    for(char i:a){
        if(i=='+'){
            ci++;
        }else if(i=='1'){
            c1++;
        }else if(i=='3'){
            c3++;
        }else{
            c2++;
        }
    }
    int t=c1+c2+c3+ci;
    while(c1--){
        cout<<1;
        t-=1;
        if(t){
            cout<<"+";
            t-=1;
        }
    }
    while(c2--){
        cout<<2;
        t-=1;
        if(t){
            cout<<"+";
            t-=1;
        }
    }
    while(c3--){
        cout<<3;
        t-=1;
        if(t){
            cout<<"+";
            t-=1;
        }
    }
    return 0;
}