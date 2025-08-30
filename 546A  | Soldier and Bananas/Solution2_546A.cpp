#include<iostream>
int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int k,n,w;
    std::cin>>k>>n>>w;
    std::cout << ( (k * w * (w + 1) / 2 - n) < 0 ? 0 : (k * w * (w + 1) / 2 - n) );
    return 0;
}