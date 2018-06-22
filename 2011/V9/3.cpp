#include <iostream>

using namespace std;

void inserare(int &n, int a[]){
    for(int i=1; i<=n; i++)
        if(a[i]%2==0){
            for(int j=n+1; j>i; j--)
                a[j]=a[j-1];

            a[i+1]=2011;
            n++;
        }

}

int main()
{
    int n, a[100];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    inserare(n, a);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}
