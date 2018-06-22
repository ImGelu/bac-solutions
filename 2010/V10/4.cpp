#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cin>>x;

    while(cin>>y){
        if(x!=y) cout<<y<<" ";
        x=y;
    }

    return 0;
}
