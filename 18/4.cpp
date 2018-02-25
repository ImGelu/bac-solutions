#include <iostream>

using namespace std;

int main(){

    int i, k=0, a[95], x, iStart, lungime=1;

    while(cin>>x) a[++k]=x;

    for(i=1; i<k; i++){
        if(a[i]<a[i+1]) lungime++;
        else{
            iStart=i;
            lungime=1;
        }

        if(lungime==4) break;
    }

    if(lungime<4) cout<<"NU EXISTA";
    else for(int j=iStart+1; j<=i+1; j++) cout<<a[j]<<" ";

    return 0;
}