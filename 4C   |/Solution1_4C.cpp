//This solution will Give me TLA if the TLA limit is half

#include<iostream>
#include<list>
#include<utility>
using namespace std;
int main(){
    int times;
    string str;
    list<pair<string,int>> lt;
    cin>>times;
    cin.ignore();
    while(times--){
        getline(cin,str);
        bool breakk=false;
        for(auto& i: lt){
            if(i.first==str){
                ++(i.second);
                cout<<i.first<<i.second<<"\n";
                breakk=true;
                break;
            }
        }if(breakk==false){
            lt.push_back({str,0});
            cout<<"OK\n";
        }  
    }
    return 0;
}