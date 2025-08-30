#include<iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a,b;
    std::cin>>a>>b;
    while(b--){
        if(a%10==0){
            a/=10;
        }else{
            a-=1;
        }
    }
std::cout<<a;
    return 0;
}