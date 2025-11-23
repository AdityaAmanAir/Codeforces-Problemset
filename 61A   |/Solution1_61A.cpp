#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b;
    getline(cin,a);
    getline(cin,b);
int n =a.length();
    for( int i=0; i<n;i++){
        cout<<((int(a[i])) ^ (int(b[i])));
    }
    return 0;
}