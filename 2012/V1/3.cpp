#include <iostream>

using namespace std;

int dublu(int &n, int a[50]){
    for(int i=1; i<=n; i++)
    if(a[i]>0){
        for(int j=n+1; j>i; j--) a[j]=a[j-1];
        a[i+1]=a[i];
        i++;
        n++;
    }
}

int main()
{

    int n, a[100];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    dublu(n, a);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}
