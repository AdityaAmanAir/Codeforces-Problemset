#include<iostream>
#include<string>
using namespace std;
int main(){

int year;
cin>>year;
string string_year = to_string(++year);
for(int i=0;i<3;i++){
    for(int j=i+1; j<4; j++){
        if(string_year[i]==string_year[j]){
            string_year = to_string(++year);
            i=-1;
            break;
        }
    }
}cout<<year;
    return 0;
}