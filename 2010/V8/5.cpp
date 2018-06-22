#include <iostream>

using namespace std;

int main()
{
    int n, k=1, a[100][100];

    cin>>n;

    for(int i=1; i<=n; i++){
        k=1;
        for(int j=i; j<=n; j++){
            if(i==j) a[i][j]=0;
            else{
                a[i][j]=a[j][i]=k;
                k++;
            }
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";

    cout<<endl;
    }

    return 0;
}
