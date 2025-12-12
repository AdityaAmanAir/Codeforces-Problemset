#include <iostream>
// #include <chrono>
using namespace std;
int main(){
    int a;cin>>a;
    // auto start = std::chrono::steady_clock::now();
    int x=0;
        x+=a/100;
        a=a%100;
        x+=a/20;
        a%=20;
        x+=a/10;
        a%=10;
        x+=a/5;
        a%=5;
        x+=a;

    cout<<x;
    // auto end = std::chrono::steady_clock::now();
    // auto time = std::chrono::duration<double>(end - start).count();
    
    // std::cout << " Time: " << time << " seconds" << std::endl;
    return 0;
}