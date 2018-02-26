#include <iostream>

using namespace std;

int main(){

    int x, a[10], iK=0, k=0;

    for(int i=1; i<=10; i++){
        cin>>x;
        if(x%13==0){
            a[++iK]=i;
            k++;
        }
    }

    cout<<k<<" ";

    for(int i=1; i<=iK; i++)
        cout<<a[i]<<" ";

    return 0;
}