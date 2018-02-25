#include <iostream>

using namespace std;

int calcul(int n){
    int pare=0, impare=0;

    while(n){
        if(n%2==0) pare++;
        else impare++;

        n/=10;
    }

    if(pare<impare) swap(pare, impare);

    return pare-impare;
}

int main(){

    int n;

    cin>>n;

    cout<<calcul(n);

    return 0;
}