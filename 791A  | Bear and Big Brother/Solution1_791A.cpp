#include <iostream> //by~ AdityaAmanAir
#include <cmath>
int main(){
    double a;
    int l,b;
    std::cin>>l>>b;
    a=(log(b)-log(l))/(log(3)-log(2));
    std::cout<<(int)a+1; // Since, It's guaranteed that Limak's weight is smaller than or equal to his brother's weight. Input like 6 4 (a>b) will not occure.
    return 0;
}