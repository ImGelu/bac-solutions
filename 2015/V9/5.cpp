#include <iostream>

using namespace std;

void permut(int n, int a[100]){
    a[0]=a[n];
    for(int i=n; i>=1; i--) a[i]=a[i-1];
}

int main()
{
    int n, a[100], m[100][100];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            m[i][j]=a[j];
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
        permut(n, a);
    }

    return 0;
}
