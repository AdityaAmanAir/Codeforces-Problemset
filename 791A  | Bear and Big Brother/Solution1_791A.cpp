#include <iostream> //by~ AdityaAmanAir
#include <cmath>
int main(){
    double a;
    double l,b;
    std::cin>>l>>b;
    a=(log(b)-log(l))/(log(3)-log(2));
    if(a-int(a)>0.9999){a+=1;} // due to floating-point representation error : For example, a might be 2.0000000000000004 instead of exactly 2.0
    std::cout<<(int)a+1; // Since, It's guaranteed that Limak's weight is smaller than or equal to his brother's weight. Input like 6 4 (a>b) will not occure.
    return 0;//doing >0.9999 is not a good solution, using std::setprecision manipulator whould be better if the condition of the problem changes.
}