#include <iostream>

using namespace std;

int main(){

    int n, minim=999999, a[100][100];

    cin>>n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];

    for(int j=1; j<=n; j++){
        minim=999999;
        for(int i=1; i<=n; i++)
            if(a[i][j]<minim) minim=a[i][j];

        cout<<minim<<" ";
    }


    return 0;
}