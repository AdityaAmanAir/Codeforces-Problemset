#include<iostream>
using namespace std;
int isEven(int num) {
    return num % 2 ;
}

int main(){
    int t;cin>>t;
    t-=3;
    int a,b,c,count=3;
    bool thiss;
    cin>>a>>b>>c;
    a=isEven(a);
    b=isEven(b);
    c=isEven(c);
    if(a==b && b==c){
        while(t--){
            cin>>c;
            count++;
            if(a!=isEven(c)){
                break;
            }
        }
        while(t--){
            cin>>c;
        }
    }else{
        if(a==c){
            count =2;
        }else if(b==c){
            count=1;
        }
        while(t--){
            cin>>c;
        }
    }cout<<count;



    return 0;
}