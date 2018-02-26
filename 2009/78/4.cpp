#include <iostream>

using namespace std;

void max_neg(int n, int v[100], int &max){
    max=-99999;

    for(int i=2; i<=n; i++)
        if(v[i]>max && v[i]<0) max=v[i];

    if(max==-99999) max=0;
}

int main(){

    int n, a[100], minPoz=10000, maxNeg;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a[i];
        if(a[i]>0 && a[i]<minPoz) minPoz=a[i];
    }

    max_neg(n, a, maxNeg);

    if(maxNeg==0) cout<<"NU EXISTA VALORI STRICT NEGATIVE ";
    else cout<<maxNeg<<" ";

    if(minPoz==10000) cout<<"NU EXISTA VALORI STRICT POZITIVE";
    else cout<<minPoz;

    return 0;
}