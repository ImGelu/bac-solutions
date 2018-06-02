#include <iostream>

using namespace std;

int main(){

    int n, p=1, a[100][100];

    cin>>n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];

    for(int j=1; j<=n; j++){
        p=1;
        for(int i=1; i<=n; i++)
            p*=a[i][j];

        cout<<p<<" ";
    }
    return 0;
}