#include <iostream>

using namespace std;

int nr(int n, int c){
    int k=0;
    while(n){
        if(n%10==c) k++;
        n/=10;
    }
    return k;
}

int main(){
    
    int n, k=0;
    
    cin>>n;
    
    for(int i=0; i<=9; i++)
        if(nr(n, i)) k++;
    
    cout<<k;
    
    return 0;
}