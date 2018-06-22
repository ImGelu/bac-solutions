#include <iostream>

using namespace std;

bool isPerfect(int n){
    int s=1;

    for(int i=2; i<=n/2; i++)
        if(n%i==0) s+=i;

    if(s==n) return 1;
    else return 0;
}

void perfect(int a, int b){
    bool ok=0;

    for(int i=b; i>=a; i--)
        if(isPerfect(i)){
            ok=1;
            cout<<i<<" ";
        }

    if(!ok) cout<<"nu exista";
}

int main()
{

    int a, b;

    cin>>a>>b;

    perfect(a, b);

    return 0;
}
