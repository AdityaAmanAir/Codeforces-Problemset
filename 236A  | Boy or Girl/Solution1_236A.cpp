#include <iostream>
int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string a;
    std::cin>>a;
    int count=0;
    int len =a.length();
    int b;
    for (int i =0;i<len; i++){
        for (int j =i+1;j<len; j++){
            if(a[i]==a[j] && (a[i]!='0') && a[j]!='0' ){
                a[j]='0';
            }
        }
    }

    for(int i =0; i<len;i++){
        if(a[i]!='0'){
            count++;
        }
    }
    
    if(count%2==0){std::cout<<"CHAT WITH HER!";}
    else{std::cout<<"IGNORE HIM!";}
    return 0;
}