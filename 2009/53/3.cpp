#include <iostream>

using namespace std;

int cmmdc(int a, int b){
    int r;
    while(b){
        r=a%b;
        a=b;
        b=r;
    }
    
    return a;
}

int main(){
    
    int n, k=0, a[100];
    
    cin>>n;
    cin>>a[1];
    
    for(int i=2; i<=n; i++){
        cin>>a[i];
        if(cmmdc(a[i-1], a[i])==1) k++;
    }
    
    cout<<k;

    return 0;
}