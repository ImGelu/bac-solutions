#include <iostream>

using namespace std;

int fibo(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else return fibo(n-1)+fibo(n-2);
}

int main(){

    int n, k=0, a[100][100];

    cin>>n;

    for(int i=1; i<=n; i++)
        if(i%2==1) for(int j=1; j<=n; j++) a[i][j]=fibo(k++);
        else for(int j=n; j>=1; j--) a[i][j]=fibo(k++);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}