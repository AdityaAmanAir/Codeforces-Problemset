#include <iostream>
using namespace std;
int main(){

int t,enter, exit, people_in_tram=0,max_people=0;
cin>>t;
while(t--){
    cin>>exit>>enter;
    people_in_tram += enter-exit;
    max_people=((max_people < people_in_tram)? people_in_tram : max_people);
}
cout<<max_people; //max people of the tram will be the minimun capicity need for the tram at any give point of time.
    return 0;
}