#include<iostream>
#include<vector>

int main(){

    int a,b,c,count=0;
    std::vector<int> myvec;
    std::cin>>a>>b;
    while(a){
        myvec.insert(myvec.begin(),a%10 +1); //order is not backwards
        a/=10;
        count++;
    }while(b){
        c=myvec.back();
        if(b>=c){
            b-=c;
            myvec.pop_back();
            count--;
        }else{
            myvec.pop_back();
            myvec.push_back(c-b);
            break;
        }
    }
    for (int i=0;i< count; i++ ){ //accessing all the element of vector will result in empty set
        std::cout<<myvec[i]-1;
    }

    return 0;
}