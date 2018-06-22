#include <iostream>

using namespace std;

int main()
{
    int n, m;
    double a[100][100], s=0;

    cin>>n;
    m=n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    for(int i=n+1; i>n/2; i--)
        for(int j=1; j<=m; j++)
            a[i][j]=a[i-1][j];

    n++;

    for(int j=1; j<=m; j++){
        s=0;
        for(int i=1; i<=n; i++)
            if(i!=n/2) s+=a[i][j];

        a[n/2+1][j]=(double)s/m;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";

    cout<<endl;
    }

    return 0;
}
