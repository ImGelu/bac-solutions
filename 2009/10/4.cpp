#include <iostream>

using namespace std;

int main(){

    int n, x, aux;
    bool gasit=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        gasit=0;
        cin>>x;
        while(!gasit){
            aux=x;
            while(aux%2==0) aux/=2;
            if(aux==1) gasit=1;
            else x++;
        }
        cout<<x<<" ";
    }
    return 0;
}