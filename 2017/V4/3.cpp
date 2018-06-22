#include <iostream>

using namespace std;

void duplicare(int &n){
    int nr=0, p=1;

    while(n){
        if(n%2==0){
            nr=nr+((n%10)/2)*p;
            p=p*10;
        }
        nr=nr+n%10*p;
        p=p*10;

        n/=10;
    }
    n=nr;
}

int main()
{
    int n;

    cin>>n;

    duplicare(n);

    cout<<n;

    return 0;
}
