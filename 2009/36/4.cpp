#include <iostream>

using namespace std;

int fr[11];

int cifra(int a){
    do{
        if(a%2==0) return a%10;
        a/=10;
    }while(a);
    
    return -1;
}

int main(){

    int n, x;
    bool ok=0;
    
    cin>>n;
    
    for(int i=1; i<=n; i++){
        cin>>x;
        fr[cifra(x)]++;
    }
    
    for(int i=9; i>=0; i--)
        for(int j=1; j<=fr[i]; j++){
            ok=1;
            cout<<i;
        }
        
    if(!ok) cout<<-1;
    
    return 0;
}