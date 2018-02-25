#include <iostream>

using namespace std;

int primul(int a){
    for(int i=2; i<=a/2; i++)
        if(a%i==0) return i;

    return 1;
}

int main(){

    int n, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(primul(x)!=1 && primul(x/primul(x))==1) cout<<x<<" ";
    }

    return 0;
}