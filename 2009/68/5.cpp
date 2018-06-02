#include <iostream>

using namespace std;

int main(){

    int n, m, a[100][100], p=1;

    cin>>n>>m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
            if(i%2==0 && j%2==1) p=(p*a[i][j])%10;
        }
    }

    cout<<p;

    return 0;
}