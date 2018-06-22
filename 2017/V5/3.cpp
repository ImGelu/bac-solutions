#include <iostream>

using namespace std;

void produs(int a, int &k){
    int p=1;
    k=1;

    while(p*k<=a){
        p=p*k;
        k+=2;
    }

    k=k-2;
}

int main()
{
    int a, k;

    cin>>a;

    produs(a, k);

    cout<<k;

    return 0;
}
