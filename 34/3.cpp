#include <iostream>

using namespace std;

bool cifre_impare(int n){
    do{
        if(n%2==0) return 0;
        n/=10;
    }while(n);
    
    return 1;
}

int main(){
    
    int n, x;
    
    cin>>n;
    
    for(int i=1; i<=n; i++){
        cin>>x;
        if(x>100 && cifre_impare(x)) cout<<x<<" ";
    }

    return 0;
}