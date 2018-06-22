#include <iostream>

using namespace std;

int main()
{
    int n, m, x, a[100][100];
    bool exista=0;

    cin>>n>>m>>x;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
            if(i==1 || i==n || j==1 || j==m)
                if(a[i][j]==x) exista=1;
        }

    if(exista) cout<<"DA";
    else cout<<"NU";

    return 0;
}
