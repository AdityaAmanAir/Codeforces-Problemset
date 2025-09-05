#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int main(){

    int coins,sum=0;cin>>coins;
    int money[coins];
    for(int i=0 ;i<coins;i++){
        cin>>money[i];
        sum+=money[i];
    }
    
    sort(money, money+coins, greater<int>());
    float half= float(sum)/2,count_coins=0;
    for(int i=0;i<coins;i++){
        sum-=money[i];
        count_coins++;
        if(sum<half){
            break;
        }

    }
cout<<count_coins;

    return 0;
}