#include <iostream>
#include <iomanip>

using namespace std;

void Insereaza(int &n, double x[1000], int k, double v){
    for(int i=n+1; i>=k; i--) x[i]=x[i-1];
    x[k]=v;
    n++;
}

int main(){

    int n=0, nr, nInitial;
    double x[1000];

    while(cin>>nr) x[++n]=nr;

    nInitial=n;

    for(int i=2; i<2*nInitial; i+=2)
        Insereaza(n, x, i, (double)(x[i]+x[i-1])/2);

    for(int i=1; i<=n; i++){
        cout<<x[i]<<" ";
        if(i%10==0) cout<<endl;
    }

    return 0;
}