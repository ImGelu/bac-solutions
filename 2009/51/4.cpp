#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n, x, a[11], s=0;

    cin>>n;

    for(int i=0; i<=n; i++) cin>>a[i];

    cin>>x;

    for(int i=0; i<=n; i++) s+=(pow(x, i)*a[i]);

    cout<<s;

    return 0;
}