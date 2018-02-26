#include <iostream>

using namespace std;

bool dist(int n){
    bool paritate=n%2;

    do{
        if(n%2!=paritate) return 0;
        n/=10;
    } while(n);

    return 1;
}

int main(){

    int n, x;
    bool ok=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(dist(x)){
            ok=1;
            cout<<x<<" ";
        }
    }

    if(!ok) cout<<-1;

    return 0;
}