#include <iostream>

using namespace std;

int main(){

    int n, k, a[100][100];

    cin>>n>>k;

    for(int j=1; j<=n; j++)
        for(int i=1; i<=n; i++)
            if(j<=k) a[i][j]=1;
            else a[i][j]=2;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}