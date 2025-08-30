#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int a,b,c;
    std::cin>>a>>b>>c;
    c=(c*(c+1)/2);
    a=(c*a-b);
    std::cout<<((a<0)?0:a);
    return 0;
}