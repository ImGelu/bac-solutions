#include <iostream>

using namespace std;

int main(){

    int x;
    bool exista=0;

    while(cin>>x){
        if(x%2==0){
            exista=1;
            cout<<x<<" ";
        }
    }

    if(!exista) cout<<"nu exista";

    return 0;
}