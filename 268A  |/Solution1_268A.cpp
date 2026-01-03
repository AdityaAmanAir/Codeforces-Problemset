#include<iostream>
#include<list>
using namespace std;
int main(){
    int t;cin>>t;
    int a,b,count=0;
    list <pair<int,int>>lt;
    for(int i=0;i<t;i++){
        cin>>a>>b;
        lt.push_back({a,b});
    }
    
        for(auto& a:lt){
        for(auto& i:lt){
            if(i.second==a.first){
                count++;
            }
        }
    }
cout<<count;
    return 0;
}