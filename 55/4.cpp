#include <iostream>

using namespace std;

int main(){

    int a[100], b[100], c[100], n, p=1;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++) cin>>b[i];

    for(int i=1; i<=n; i++){
        p=1;
        if(a[i]<b[i]){
            int aux=b[i];
            while(aux){
                p=p*10;
                aux/=10;
            }
            c[i]=a[i]*p+b[i];
        }
        else{
            int aux=a[i];
            while(aux){
                p=p*10;
                aux/=10;
            }
            c[i]=b[i]*p+a[i];
        }
    }

    for(int i=1; i<=n; i++) cout<<c[i]<<" ";

    return 0;
}