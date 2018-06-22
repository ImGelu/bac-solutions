#include <iostream>

using namespace std;

int main()
{
    int s1, s2;

    cin>>s1>>s2;

    for(int i=10000; i<=99999; i++)
        if(i%10+i/10%10==s2 && i/1000%10+i/10000==s1) cout<<i<<" ";

    return 0;
}
