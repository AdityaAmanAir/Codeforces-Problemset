#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
    int year;
    cin>>year;
    while(true){
        ++year;
        string sy = to_string(year);
        set<char> mySet(sy.begin(),sy.end());
        if(mySet.size()==4){
            cout<<year;
            break;
        }
    }
    return 0;
}