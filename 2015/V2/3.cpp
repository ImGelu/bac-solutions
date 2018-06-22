#include <iostream>

using namespace std;

int NrPrime(int n){
    int aux=n, k=0;

    for(int i=2; i<=7; i++)
        if(i==2 || i==3 || i==5 || i==7){
            while(aux){
                if(aux%10==i) k++;
                aux/=10;
            }
            aux=n;
        }
    return k;
}

int main()
{
    int n;

    cin>>n;

    cout<<NrPrime(n);

    return 0;
}
