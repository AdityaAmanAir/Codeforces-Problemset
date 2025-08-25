#include <iostream>
#include <cmath>
int main(){
    double a;
    int l,b;
    std::cin>>l>>b;
    a=(log(b)-log(l))/(log(3)-log(2));
    std::cout<<(int)a+1;
    return 0;
}