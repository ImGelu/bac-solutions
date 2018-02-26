#include <iostream>

using namespace std;

int main(){

    int n, k=0;

    cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=0; j<i; j++){
            cout<<2*j<<" ";
        }
        cout<<endl;
    }

    return 0;
}