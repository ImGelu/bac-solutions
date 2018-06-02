#include <iostream>

using namespace std;

int main(){

    int n, a[100][100], p=1;

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
            if(i==j && a[i][j]%2==0) p=(p*a[i][j])%10;
        }
    }

    if(p!=1) cout<<p;
    else cout<<"imposibil";


    return 0;
}