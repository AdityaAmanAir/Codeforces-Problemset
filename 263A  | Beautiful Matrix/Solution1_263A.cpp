#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int t=5;
    int row=0,column=0;
    int r=0;
    while(t--){
        int col=0,tt=5;
        ++r;
        while(tt--){
            int num;
            cin>>num;
            ++col;
            if(num==1){
                column=col;
                row=r;
            }
        }
        
        
    }
cout<<abs(row-3)+abs(column-3);
    return 0;
}