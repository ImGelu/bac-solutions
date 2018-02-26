#include <iostream>

using namespace std;

double medie(int n, int v[100]){
    double s=0;
    int k=0;

    for(int i=1; i<=n; i++)
        if(v[i]%2==0) s+=v[i], k++;

    return (double)s/k;
}

int main(){

    int n, v[100];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>v[i];

    cout<<medie(n, v);

    return 0;
}