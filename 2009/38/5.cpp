#include <iostream>

using namespace std;

int main(){

    int n, p=1, minim, a[100][100];
    bool exista=false;

    cin>>n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];

    for(int j=1; j<=n; j++){
        minim=100;
        for(int i=1; i<=n; i++){
            if(a[i][j]<minim) minim=a[i][j];
        }
        if(minim==a[n-j+1][j]){
            exista=true;
            p*=minim;
        }
    }

    if(exista) cout<<p%10;
    else cout<<"NU EXISTA";

    return 0;
}