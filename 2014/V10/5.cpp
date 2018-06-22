#include <iostream>

using namespace std;

int main()
{
    int n, m, a[100][100], k=2;

    cin>>n>>m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            while(k%5==0) k+=2;
            a[i][j]=k;
            cout<<a[i][j]<<" ";
            k+=2;
        }
        cout<<endl;
    }

    return 0;
}
