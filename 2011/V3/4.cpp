#include <iostream>

using namespace std;

int fr[10];

int main()
{
    int x, i=0, maxcif=-1, maxcifi=0;

    while(cin>>x){
        i++;
        if(fr[x/10%10]>maxcif){
            maxcif=fr[x/10%10];
            maxcifi=i;
        }
        fr[x/10%10]++;
    }

    cout<<maxcifi;

    return 0;
}
