#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n, k=0;
    bool ok=1;
    char c[20], bun[20];

    cin>>n>>bun;

    for(int i=2; i<=n; i++){
        cin>>c;
        ok=1;
        for(int j=0; j<strlen(bun); j++)
            if(c[j]!=bun[j]) ok=0;

        if(ok) k++;
    }

    cout<<k;

    return 0;
}
