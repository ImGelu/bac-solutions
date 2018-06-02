#include <iostream>

using namespace std;

int main(){

    int n, k=2, a[100][100];

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            while(k%2==1 || k%3==0) k+=2;
            a[i][j]=k;
            k+=2;
        }
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}