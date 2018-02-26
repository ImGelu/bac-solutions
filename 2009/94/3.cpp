#include <iostream>

using namespace std;

int f(int n, int a[202], int p1, int p2){
    int poz=0, neg=0, nul=0;

    for(int i=p1; i<=p2; i++){
        if(a[i]>0) poz++;
        else if(a[i]<0) neg++;
        else if(a[i]==0) nul++;
    }

    if(poz>neg && poz>nul) return 1;
    else if(neg>poz && neg>nul) return -1;
    else if(nul>poz && nul>neg) return 0;
    else return 2;
    
}

int main(){

    int n, a[202];

    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];
    
    if(f(n, a, 0, n-1)==1) cout<<"pozitive";
    else if(f(n, a, 0, n-1)==0) cout<<"nule";
    else if(f(n, a, 0, n-1)==-1) cout<<"negative";
    else cout<<"nedecis";

    return 0;
}