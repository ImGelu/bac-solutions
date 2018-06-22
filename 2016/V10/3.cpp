#include <iostream>

using namespace std;

int cifreImpare(int n){
    int nr=0, p=1;
    bool exista=0;

    while(n){
        if(n%2==0){
            nr=nr+n%10*p;
            p=p*10;
        }
        else exista=1;
        n/=10;
    }

    if(!exista) nr=-1;

    return nr;
}

int main()
{
    int n;

    cin>>n;

    cout<<cifreImpare(n);

    return 0;
}
