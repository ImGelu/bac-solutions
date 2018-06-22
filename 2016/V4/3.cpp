#include <iostream>

using namespace std;

int minDivPrim(int n){
    int s=1, divizor=2, putere=0;
    while(n>1){
            if(n%divizor==0){
            s*=divizor;
            while(n%divizor==0) n/=divizor;
        }
        divizor++;
    }
    return s;
}

int main()
{
    int n;

    cin>>n;

    cout<<minDivPrim(n); /// cel mai mic numar cu aceasi divizori va fi produsul dintre divizorii primi ai lui n, luati la puterea 1

    return 0;
}
