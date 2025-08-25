#include <iostream>
//using namespace std; //Not a good practice for long term
int main(){

    std::string a;
    std::cin>>a;
    if(a[0]>=97){ //no need check other case as it will only be consists of lowercase and uppercase English letters 
        a[0]-=32;
    }
    std::cout<<a;
    return 0;
}