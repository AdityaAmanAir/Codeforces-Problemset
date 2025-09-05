#include<iostream>
using namespace std;
int main(){
string berland,birland;
int n;
cin>>berland>>birland;
n=size(birland);
if(n==size(berland)){
for (int i=0; i<n; i++){
    if(birland[i]!=berland[n-i-1]){printf("NO");return 0;}
}printf("YES");
}else{printf("NO");}
    return 0;
}