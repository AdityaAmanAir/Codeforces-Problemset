#include<iostream>
#include<iomanip>//It was not required in this question, But stil
using namespace std;
int main(){
    int juice,glass,total=0;cin>>juice;
    for(int i =0; i< juice; i++){
        cin>>glass;
        total+=glass;
    }
    cout<<fixed<<setprecision(5)<<(double(total)/juice);
    return 0;
}