#include <iostream>

using namespace std;

int main(){

    int n, k=0;
    double x, s=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if((int)x>9) s+=x, k++;
    }

    cout<<(double)s/k;

    return 0;
}