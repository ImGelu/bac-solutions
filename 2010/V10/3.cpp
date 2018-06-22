#include <iostream>

using namespace std;

void tablou(int n, int k, int a[]){
    int nr=1;
    for(int i=1; i<=n*k; i++){
        a[i]=nr;
        if(i%k==0) nr++;
    }
}

int main()
{
    int n, k, a[100];

    cin>>n>>k;

    tablou(n, k, a);

    for(int i=1; i<=n*k; i++) cout<<a[i]<<" ";

    return 0;
}
