#include <iostream>
// #include <chrono>
using namespace std;
int main(){
    int a;cin>>a;
    // auto start = std::chrono::steady_clock::now();
    int x=0;
    while(a>0){
        if (a-100>=0) {a-=100; x++;continue;}
        if (a-20>=0) {a-=20; x++;continue;}
        if (a-10>=0) {a-=10; x++;continue;}
        if (a-5>=0) {a-=5; x++;continue;}
        if (a-1>=0) {a-=1; x++;continue;}
    }
    cout<<x;
    // auto end = std::chrono::steady_clock::now();
    // auto time = std::chrono::duration<double>(end - start).count();
    
    // std::cout << " Time: " << time << " seconds" << std::endl;

    return 0;
}