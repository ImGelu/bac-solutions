#include <iostream>

using namespace std;

int main(){

    int n, a[100][100];

    cin>>n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(j%2==1) a[i][j]=i+j;
            else a[i][j]=i;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}