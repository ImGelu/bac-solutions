#include <iostream>

using namespace std;

void divizori(int n, int &mic, int &mare){
    mic=0; mare=0;
    for(int i=2; i<=n/2; i++)
        if(n%i==0){
            if(mic==0) mic=i;
            else mare=i;
        }

        if(mare==0) mic=0;
}

int main()
{
    int n, mic, mare;

    cin>>n;

    divizori(n, mic, mare);

    cout<<mic<<" "<<mare;

    return 0;
}
