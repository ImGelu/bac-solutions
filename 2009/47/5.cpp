#include <iostream>

using namespace std;

void elimLinie(int a[][100], int l, int &n, int m){
    for(int i=l; i<n; i++)
        for(int j=1; j<=m; j++)
            a[i][j]=a[i+1][j];

    n--;
}

int main(){

    int n, m, a[100][100];

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    for(int i=n; i>=1; i--) ////// ELIMINAND O LINIE INCEPAND DE SUS IN JOS, LINIA IMPARA (PARA) VA DEVENI PARA (IMPARA) SI ATUNCI NU OBTINEM REZULTATUL DORIT. DE ACEEA
                            ///// PORNIM DE JOS IN SUS!!!
        if(i%2==1) elimLinie(a, i, n, m);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}