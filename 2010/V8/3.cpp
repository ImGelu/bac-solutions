#include <iostream>

using namespace std;

int f(int n){
    if(n<=2) return 1;
    else return 3*f(n-1)-f(n-2);
}

void sortare(int n, int a[20]){
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]%2==0 && a[j]%2==1) swap(a[i], a[j]);
}

int main()
{
    int n, a[20];

    cin>>n;

    for(int i=1; i<=n; i++) a[i]=f(i);

    sortare(n, a);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}
