#include <iostream>

using namespace std;

int inter(int na, int nb, int a[], int b[])
{
    int k=0;
    for(int i=1; i<=na; i++)
        for(int j=1; j<=nb; j++)
            if(a[i]==b[j]) k++;

    return k;
}

int main()
{

    int na, nb, a[100], b[100];

    cin>>na>>nb;

    for(int i=1; i<=na; i++) cin>>a[i];
    for(int i=1; i<=nb; i++) cin>>b[i];

    cout<<inter(na, nb, a, b);

    return 0;

}
