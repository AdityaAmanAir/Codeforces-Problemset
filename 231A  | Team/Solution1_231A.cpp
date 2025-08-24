#include<bits/stdc++.h>
int main(){

    // 1. De-sync C++ streams from C streams.
    std::ios_base::sync_with_stdio(false);
    // 2. Untie cin from cout.
    std::cin.tie(NULL);

int t,count=0;
std::cin>>t;
while(t--){
    int a,b,c;
    std::cin>>a>>b>>c;
    if(a+b+c>=2){
        count++;
    }
}std::cout<<count;
    return 0;
}