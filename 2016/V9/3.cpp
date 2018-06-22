#include <iostream>

using namespace std;

void duplicare(int n, int &d){
    d=0;
    int p=1;

    while(n){
        d=d+(n%10)*p;
        p=p*10;

        if(n%2==0){
            d=d+(n%10)*p;
            p=p*10;
        }

        n/=10;
    }

    if(p==1) d=-1;
}

int main()
{
    int n, d;

    cin>>n;

    duplicare(n, d);

    cout<<d;

    return 0;
}
