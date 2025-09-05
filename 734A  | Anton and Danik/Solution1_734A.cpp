#include<iostream>
using namespace std;
int main(){

int times,count=0;
string game;
cin>>times;
times/=2;
cin>>game;
for (char i:game){
     if(i=='A'){count++;}
     else{count--;}
     if(count>times){printf("Anton"); return 0;}
     else if(-count > times){printf("Danik"); return 0;}
}
if(count>0){
    printf("Anton");
}
    else if(count==0){
        printf("Friendship");
    }
    else{
        printf("Danik");
    }
    return 0;
}