#include <iostream>

using namespace std;

int main(){

    int n, x, c1, c2, c3;
    
    cin>>n;
    
    for(int i=1; i<=n; i++){
        cin>>x;
        c1=x%10;
        c2=x/10%10;
        c3=x/100;
        if(x>=100 && x<=999 && c1!=c2 && c1!=c3 && c2!=c3) cout<<x<<" ";
    }
    
    return 0;
}