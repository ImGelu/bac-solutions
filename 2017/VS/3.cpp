#include <iostream>

using namespace std;

int ranguri(int n){
    int i=0, k=0;

    while(n){
        if(n%10==i) k++;
        n/=10;
        i++;
    }

    return k;
}

int main()
{
    int n;

    cin>>n;

    cout<<ranguri(n);

    return 0;
}
