#include <iostream>

using namespace std;

int main(){

    int n, k=1, a[100][100];

    cin>>n;

    for(int j=1; j<=n; j++)
        for(int i=1; i<=n; i++)
            a[i][j]=k++;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}