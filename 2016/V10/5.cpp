#include <iostream>

using namespace std;

int main()
{
    int n, a[100][100];

    cin>>n;

    for(int i=n; i>=1; i--)
        for(int j=1; j<=n; j++)
            if(i==n) a[i][j]=n;
            else if(j==1) a[i][j]=i;
            else a[i][j]=a[i][j-1]+a[i+1][j-1];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";

    cout<<endl;
    }

    return 0;
}
