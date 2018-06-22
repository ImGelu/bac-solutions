#include <iostream>

using namespace std;

void divizor(int n, int &d){
    d=2;
    int p=0;

    while(n>1){
        if(n%d==0) n/=d;
        else d++;
    }

}

int main()
{
    int n, d;

    cin>>n;

    divizor(n, d);

    cout<<d;

    return 0;
}
