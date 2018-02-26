#include <iostream>

using namespace std;

int cinci(int n, int v[]){
    int k=0;
    for(int i=1; i<=n; i++){
        while(v[i]){
            if(v[i]%10==5) k++;
            v[i]/=10;
        }
    }
        return k;
}

int main(){

    int n, v[20];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>v[i];

    cout<<cinci(n, v);

    return 0;
}