#include <iostream> //by~ AdityaAmanAir
int main(){
    int t,count=0;
    char a,s='0';
    std::cin>>t;
    while(t--){
        std::cin>>a;
        if(a==s){
            count++;
        }
        s=a;
    }
    std::cout<<count;
    return 0;
}