#include <iostream>

using namespace std;

int Fibo(int n){
    int k=2, prec=1, anteprec=1, fibo;

    while(k<=n){
        fibo=prec+anteprec;
        anteprec=prec;
        prec=fibo;

        if(fibo%2==1) k++;
        if(k==n) return fibo;
    }
}

int main()
{
    int n;

    cin>>n;

    cout<<Fibo(n);

    return 0;
}
