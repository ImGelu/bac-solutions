#include <iostream>

using namespace std;

void fibo(int n, int v[30]){
    int f1=1, f2=1, fib=2;
    v[1]=1; v[2]=1;
    for(int i=3; i<=n; i++){
        while(fib%2==0){
            f1=f2;
            f2=fib;
            fib=f1+f2;
        }
        v[i]=fib;

        f1=f2;
        f2=fib;
        fib=f1+f2;
    }
}

int main(){

    int n, v[30];

    cin>>n;

    fibo(n, v);

    for(int i=1; i<=n; i++) cout<<v[i]<<" ";

    return 0;
}