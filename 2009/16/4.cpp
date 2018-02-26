#include <iostream>

using namespace std;

int cifrak(int n, int k){
    int cnt=0;
    
    while(n){
        if(n%10==k) cnt++;
        n/=10;
    }
    
    return cnt;
}

int main(){
    
    int x;
    
    while(cin>>x)
        if(cifrak(x, 0)==3) cout<<x<<"\n";
        
    return 0;
}