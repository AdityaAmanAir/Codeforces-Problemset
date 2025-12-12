#include<iostream>
using namespace std;
int main(){

    int a; 
    cin>>a;
    if (a<26){
        cout<<"NO\n";
        return 0;
    }
    string str;
    char alpha[26]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};
    cin.ignore();
    getline(cin, str);
    for(char k : str){
        for(int i=0; i<26;i++){
            if(k<97){
                k+=32;
            }
            if (k==alpha[i]){
                alpha[i]='0';
            }
        }
    }
    for (char j : alpha){
        if (j!='0'){
            cout<<"NO\n";
        return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}