#include <iostream>

using namespace std;

int main(){

    int kPar=2, kImpar=1, n, a[100][100];

    cin>>n;

    for(int i=1; i<=2*n; i++)
        if(i%2==1)
            for(int j=1; j<=2*n; j++){
                a[i][j]=kImpar;
                kImpar+=2;
            }
        else{
            for(int j=2*n; j>=1; j--){
                a[i][j]=kPar;
                kPar+=2;
            }
        }

    for(int i=1; i<=2*n; i++){
        for(int j=1; j<=2*n; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}