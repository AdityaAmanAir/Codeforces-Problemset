#include <iostream> //by~ AdityaAmanAir
int main(){

    int a,b;
    std::cin>>a>>b;
    int years=0;
    while(a<=b){
        a*=3;
        b*=2;
        years++;
    }
    std::cout<<years;
    return 0;
}