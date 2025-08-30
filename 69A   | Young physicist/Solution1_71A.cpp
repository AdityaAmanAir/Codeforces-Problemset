#include <iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t,a,b,c,sumA=0,sumB=0,sumC=0;
    std::cin>>t;
    while(t--){
        std::cin>>a>>b>>c;
        sumA+=a;
        sumB+=b;
        sumC+=c;
    }std::cout<<((sumA==0 && sumB==0 && sumC==0)?"YES\n":"NO\n");
    return 0;
}