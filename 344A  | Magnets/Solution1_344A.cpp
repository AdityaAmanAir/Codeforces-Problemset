#include<iostream>
using namespace std;
int main(){
int times,last,magnet=0,count=0;
cin>>times;
while(times--){
cin>>magnet;
if(magnet!=last){count++;last=magnet;}
}cout<<count;
    return  0;
}