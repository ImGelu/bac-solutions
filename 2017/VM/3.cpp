#include <iostream>
#include <math.h>

using namespace std;

int nrDiv(int a, int b){
    int k=0;

    for(int i=a; i<=b; i++)
        if((double)sqrt(1+4*i)==(int)sqrt(1+4*i)) k++; /// a*(a+1) - ecuatie de gr 2. delta trebuie sa fie patrat perfect

    return k;
}

int main()
{
    int a, b;

    cin>>a>>b;

    cout<<nrDiv(a, b);

    return 0;
}
