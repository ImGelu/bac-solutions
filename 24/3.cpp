#include <iostream>
#include <iomanip>

using namespace std;

void p(int n, int x[], int &maxi, int &mini, int &s){
    s=maxi=mini=x[1];

    for(int i=2; i<=n; i++){
        s+=x[i];
        if(x[i]<mini) mini=x[i];
        if(x[i]>maxi) maxi=x[i];
    }

}

int main(){

    int n, x[100], maxi, mini, s;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>x[i];

    p(n, x, maxi, mini, s);

    cout<<fixed<<setprecision(3)<<(double)(s-mini-maxi)/(n-2);

    return 0;
}