#include <iostream>

using namespace std;

int DivImpar(int a, int b){
    int d=a;

    while(d){
        d--;
        if(d%2==1 && a%d==0 && b%d==0) return d;

    }
}

int main()
{
    int a, b;

    cin>>a>>b;

    cout<<DivImpar(a, b);

    return 0;
}
