#include<iostream>
int main(){

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);


    int upper=0,low=0;
    std::string a;
    std::cin>>a;
    for (char i : a){
        if(i<94){
            upper++;
        }else{low++;}
    }
    if(low<upper){
        for (char i:a){
            std::cout<<char((i>='a')?i-' ':i);
        }
    }else{
        for (char i:a){
            std::cout<<char((i<'a')?i+' ':i);
        }
    }

    return 0;
}