#include <iostream>

using namespace std;

int main(){

    int n, k=0, s=0, a[100][100];

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
            if(i<j && a[i][j]>0){
                s+=a[i][j];
                k++;
            }
        }
    }

    if(!k) cout<<(double)s/k;
    else cout<<"NU EXISTA";

    return 0;
}