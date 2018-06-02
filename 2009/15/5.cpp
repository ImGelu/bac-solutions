#include <iostream>

using namespace std;

int main(){

    int x, a[100][100];

    cin>>x;

    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++)
            a[i][j]=x%10;

        x/=10;
    }

    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}