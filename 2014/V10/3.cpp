#include <iostream>

using namespace std;

void triplete(int n){
    for(int x=0; x<n; x++)
        for(int y=x+1; y<n; y++)
            for(int z=y+1; z<=n; z++)
                if(x*y+y*z==n) cout<<"("<<x<<","<<y<<","<<z<<")\n";
}

int main()
{
    int n;

    cin>>n;

    triplete(n);

    return 0;
}
