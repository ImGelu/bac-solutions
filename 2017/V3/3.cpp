#include <iostream>

using namespace std;

bool esteIdentic(int n){
    int cif=n%10;

    while(n){
        if(n%10!=cif) return 0;
        n/=10;
    }

    return 1;
}

void identice(int a, int b){
    bool exista=0;

    for(int i=a; i<=b; i++)
        if(esteIdentic(i)) cout<<i<<" ";

}

int main()
{
    int a, b;

    cin>>a>>b;

    identice(a, b);

    return 0;
}
