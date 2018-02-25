#include <iostream>

using namespace std;

int fr[10000];

int main(){

    int x;
    
    while(cin>>x) fr[x]++;
    
    for(int i=1; i<=9999; i+=2)
        if(fr[i]) cout<<i<<" ";
    
    cout<<endl;
        
    for(int i=10000; i>=2; i-=2)
        if(fr[i]) cout<<i<<" ";
    
    return 0;
}