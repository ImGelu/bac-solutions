#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("nr.txt");

int main(){

    int x, a[100], k=1;

    while(fin>>x){
        if(x>0) a[k++]=x;
    }

    int n=k-1;

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]>a[j]) swap(a[i], a[j]);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}