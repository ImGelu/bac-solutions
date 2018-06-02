#include <iostream>

using namespace std;

int main(){

    int a[100][100], b[100][100], c[100][100], n;

    cin>>n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>b[i][j];

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(i<j) c[i][j]=a[i][j];
            else if(i>j) c[i][j]=b[i][j];
            else c[i][j]=min(a[i][j], b[i][j]);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout<<c[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}