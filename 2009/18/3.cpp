#include <iostream>

using namespace std;

int count(double v[], int n){
    int k=0;
    double medie=(v[1]+v[n])/2;

    for(int i=1; i<=n; i++)
        if(v[i]>=medie) k++;

    return k;
}

int main(){

    int n;
    double v[100];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>v[i];

    if(count(v, n)==n) cout<<"DA";
    else cout<<"NU";

    return 0;
}