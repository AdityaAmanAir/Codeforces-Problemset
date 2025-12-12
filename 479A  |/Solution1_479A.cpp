#include<iostream>
int main(){
    int a,b,c,d,p,n,m;std::cin>>a>>b>>c;
    // if(a>=b && a>=c){n=(a*(b+c));}else if(c>=a && c>=b){n=(c*(b+a));}else{n=(b*(a+c));}
    // p=a*b*c; d=a+b+c;
    // std::cout<<((((n>p)? n : p)>d)?((n>p)? n : p) :d );
    p=a*b*c; d=a+b+c;n=(a+b)*c;m=a*(b+c);
    std::cout<<((((p>d)? p:d )>((n>m)? n:m))?((p>d)? p:d ) :((n>m)? n:m));
    return 0;
}