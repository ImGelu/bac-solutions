#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char cuvinte[100][100], cuvant[100];

    int n, k;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>cuvant;
        strcpy(cuvinte[i], cuvant);
    }

    cin>>k;

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(strlen(cuvinte[i])!=k && strlen(cuvinte[j])==k) swap(cuvinte[i], cuvinte[j]);

    for(int i=1; i<=n; i++) cout<<cuvinte[i]<<" ";

    return 0;
}
