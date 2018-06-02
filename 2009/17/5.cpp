#include <iostream>

using namespace std;

int main(){

    int n, a[100][100], k=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            a[i][j]=k+j;

        k++;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}