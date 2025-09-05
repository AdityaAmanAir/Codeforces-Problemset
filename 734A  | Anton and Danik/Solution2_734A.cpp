#include<iostream>
using namespace std;
int main(){

int time, Awin=0, Dwin=0;
char win;
cin>>time;
    while(time--){
        cin>>win;
        if(win=='A'){
            Awin++;
        }else{
            Dwin++;
        }
    }if(Awin>Dwin){cout<<"Anton";}
    else if (Awin<Dwin){cout<<"Danik";}
    else{cout<<"Friendship";}

    return 0;
}