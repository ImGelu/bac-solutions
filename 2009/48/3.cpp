#include <iostream>

using namespace std;

int cmdiv(int x, int y){
    int r;
    while(y){
        r=x%y;
        x=y;
        y=r;
    }    
    return x;
}

int main(){
    
    int n, k=0;
    
    cin>>n;
    
    for(int i=1; i<=n; i++)
        if(cmdiv(n, i)==1) k++;
    
    cout<<k;

    return 0;
}