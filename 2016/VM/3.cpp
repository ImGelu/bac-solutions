#include <iostream>

using namespace std;

int Cifre(int n){
    int k=0, cate=0, aux=n;

    for(int i=0; i<=9; i++){
        cate=0;
        while(aux){
            if(aux%10==i) cate++;
            aux/=10;
        }
        if(cate==1) k++;
        aux=n;
    }
    return k;
}

int main()
{
    int n;

    cin>>n;

    cout<<Cifre(n);

    return 0;
}
