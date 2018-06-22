#include <iostream>

using namespace std;

int main()
{
    int n, m, a[100][100], k=1;

    cin>>n>>m;

    for(int i=n; i>=1; i--){
        for(int j=m; j>=1; j--){
            while(k%3==0) k+=2;
            a[i][j]=k;
            k+=2;
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";

    cout<<endl;
    }

    return 0;
}
