#include <iostream> //by~ AdityaAmanAir
#include <vector>
using namespace std;
int main(){

    int t,k;
    cin>>t>>k;
    int l=k-1;
int b,count=0;
    while(l--){  
        cin>>b;
        if(b==0){
            count--;
        }
    }
    t=t-k;
    int score;
    cin>>score;
    if(score==0){count--;}
    while(t--){
        int a;
        cin>>a;
        if(a==score && a!=0){
            k++;
        }
    }
    
    cout<<k+count<<"\n";
    return 0;
}