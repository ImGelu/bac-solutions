#include <iostream>

using namespace std;

int sDiv(int n){
    int s=0;

    for(int i=2; i<=n/2; i++)
        if(n%i==0) s+=i;

    return s;
}

void subperfect(int a, int b){
    bool ok=0;

    for(int i=b; i>=a; i--)
        if(i<sDiv(i)){
            ok=1;
            cout<<i<<" ";
        }

    if(!ok) cout<<"nu exista";
}

int main()
{

    int a, b;

    cin>>a>>b;

    subperfect(a, b);

    return 0;
}
