#include <iostream>

using namespace std;

int sDiv(int n){
    int s=0;

    for(int i=2; i<=n/2; i++)
        if(n%i==0) s+=i;

    return s;
}

int sPar(int n){
    while(n){
        n++;
        if(n%2==0 && sDiv(n)%2==0) return n;
    }
}

int main()
{

    int n;

    cin>>n;

    cout<<sPar(n);

    return 0;
}
