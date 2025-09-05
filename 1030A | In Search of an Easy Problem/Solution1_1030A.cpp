#include<iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
int garbage;
string opinions;
cin>>garbage;
cin.ignore();
getline(cin, opinions);
for(char i : opinions){
    if(i=='1'){printf("HARD");return 0;} //I am only using cin for input and printf for output, which is safe
}
printf("EASY");
    return 0;
}