#include <iostream>

using namespace std;

int main(){

    int n, k1=0, s1=0, k2=0, s2=0, a[100][100];

    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
            if(i<j && a[i][j]>0){
                s1+=a[i][j];
                k1++;
            }

            if(i>j && a[i][j]>0){
                s2+=a[i][j];
                k2++;
            }
        }
    }

    cout<<(double)s1/k1 - (double)s2/k2;

    return 0;
}