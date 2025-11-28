#include<iostream>
#include<string>
int main(){


    std::string a;

    std::getline(std::cin,a);
    for(char _ : a){
        if(_=='H'||_=='Q'||_=='9'){
            std::cout<<"YES\n";
            return 0;
        }
    }
        std::cout<<"NO\n";
    



    return 0;
}