#include <iostream>

using namespace std;

int main(){

    int n, m, minim=10000, a[100][100];

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];

    for(int j=n; j>=1; j--){
        minim=10000;
        for(int i=n; i>=1; i--)
            if(a[i][j]<minim) minim=a[i][j];

        cout<<minim<<" ";
    }


    return 0;
}