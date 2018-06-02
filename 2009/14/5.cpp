#include <iostream>

using namespace std;

int main(){

    int x, aux, a[100][100];

    cin>>x;

    for(int i=1; i<=4; i++){
        aux=x;
        for(int j=1; j<=4; j++){
            a[i][j]=aux%10;
            aux/=10;
        }
    }

    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}