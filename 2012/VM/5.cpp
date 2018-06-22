#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char c[100], x[100];
    int n, k=0, j=0;
    bool ok=1;

    cin>>n>>x;

    for(int i=2; i<=n; i++){
        cin>>c;
        ok=1;
        j=0;
        while(j<strlen(x)){
            if(c[strlen(c)-1-j]!=x[strlen(x)-1-j]) ok=0;
            j++;
        }
        if(ok) k++;
    }

    cout<<k;

    return 0;
}
