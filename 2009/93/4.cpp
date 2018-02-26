#include <iostream>

using namespace std;

int dcm(int a, int b){
    int r;
    while(b){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main(){

    int n, x, prec;
    
    cin>>n;
    cin>>x;
    prec=x;
    
    for(int i=1; i<n; i++){
         cin>>x;
         prec=dcm(prec, x);
    }
    
    cout<<prec;

    return 0;
}