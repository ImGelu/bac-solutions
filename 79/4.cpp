#include <iostream>

using namespace std;

int fr[100];

int main(){
    
    int n, x;
    bool lipseste=0;
    
    cin>>n;
    
    for(int i=1; i<=n; i++){
        cin>>x;
        fr[x]++;
    }
    
    for(int i=1; i<=100; i++)
        if(fr[i]==0){
            cout<<i<<" ";
            lipseste=1;
        }
    
    if(!lipseste) cout<<"NU LIPSESTE NICIUN NUMAR";

    return 0;
}