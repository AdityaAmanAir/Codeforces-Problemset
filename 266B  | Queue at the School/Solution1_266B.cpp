#include<iostream>
using namespace std;
int main(){
int number_of_child, time;
string line;
cin>>number_of_child>>time;
cin.ignore();
getline(cin,line);
while(time--){for (int i =0; i<number_of_child-1;i++){ //I assumed time space for every child is same. That is at a given point of time children(BOY) will look back if there is a Girl they will swap. Swaping will be Simultaneously.
    if(line[i]=='B' && line[i+1]=='G'){
        line[i]='G';
        line[i+1]='B';
        i++;
    }
}}
for (char i: line){cout<<i;} 
    return 0;
}