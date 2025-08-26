#include <iostream> //by~ AdityaAmanAir
using namespace std;
int main(){
    string a,b;
    getline(cin, a);
    getline(cin, b);
    bool did_not_break = true;
    int i=a.length();
    for (int j=0; j<i ; j++){
        if(a[j]>96){
            a[j]-=32;
        }
        if(b[j]>96){
            b[j]-=32;
        }
        if(a[j]>b[j]){
            cout<<1;
            did_not_break = false;
            break;
        }if(a[j]<b[j]){
            cout<<-1;
            did_not_break = false;
            break;
        }
    }if(did_not_break){cout<<0;}
    return 0;
}