#include<iostream>
using namespace std;
int main(){
int rooms,people, accomadate, options=0;
cin>>rooms;
while(rooms--){
    cin>>people>>accomadate;
    if(accomadate-people>=2){options++;}
}
cout<<options;

    return 0;
}