#include <iostream>

using namespace std;

int main(){

    int n, iMax, jMax, iMin, jMin, maxim=-10000, minim=10000, a[100][100];

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];

            if(j==n-i+1){
                if(a[i][j]<minim){
                    iMin=i;
                    jMin=j;
                    minim=a[i][j];
                }

                if(a[i][j]>maxim){
                    iMax=i;
                    jMax=j;
                    maxim=a[i][j];
                }
            }
        }
    }

    swap(a[iMin][jMin], a[iMax][jMax]);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}