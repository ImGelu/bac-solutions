#include <iostream>

using namespace std;

int f(int a){
    int div=2, exp=0;

    while(a>1){
        while(a%div==0){
            a=a/div;
            exp++;
        }
        if(exp) return div;
        exp=0;
        div++;
    }
}

int main(){

    bool exista=0;
    int n, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(f(x)==x){
            cout<<x<<" ";
            exista=1;
        }
    }

    if(!exista) cout<<"NU EXISTA";

    return 0;
}