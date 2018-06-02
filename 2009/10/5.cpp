#include <iostream>
#include <math.h>

using namespace std;

bool pp(int n){
    if((int)sqrt(n)==sqrt(n) && n*n%2==0) return true;
    else return false;
}

int main(){

    int n, p, k=0, a[20][20];

    cin>>n>>p;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=p; j++){
            while(!pp(k)) k++;
            a[i][j]=k;
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}