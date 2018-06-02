#include <iostream>

using namespace std;

int main(){

    int n, a[100][100];
    bool ok=1;

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
            if(i>j && a[i][j]!=0) ok=false;
        }
    }

    if(ok) cout<<"Este triunghiulara superior";
    else cout<<"Nu este triunghiulara superior";

    return 0;
}