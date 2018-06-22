#include <iostream>

using namespace std;

int valuri(int n, int v[100]){
    for(int i=0; i<2*n; i++)
        if(i%2==0) v[i+1] = 2*n-i;
        else v[i-1]=i;
}

int main()
{
    int n, a[100];

    cin>>n;

    for(int i=1; i<=2*n; i++) cin>>a[i];

    valuri(n, a);

    for(int i=1; i<=2*n; i++) cout<<a[i]<<" ";

    return 0;
}
