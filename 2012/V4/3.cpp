#include <iostream>

using namespace std;

int zero(int n, int a[100]){
    int par[100], impar[100], k1=0, k2=0;

    for(int i=1; i<=2*n; i++)
        if(a[i]%2==0) par[k1++]=a[i];
        else impar[k2++]=a[i];

    k1=0, k2=0;

    for(int i=1; i<=2*n; i++)
        if(i%2==0) a[i]=par[k1++];
        else a[i]=impar[k2++];

}

int main()
{
    int n, a[100];

    cin>>n;

    for(int i=1; i<=2*n; i++) cin>>a[i];

    zero(n, a);

    for(int i=1; i<=2*n; i++) cout<<a[i]<<" ";

    return 0;
}
