#include <iostream>

using namespace std;

void max_d(int n, int &m1, int &m2){
    m1=-1, m2=-1;

    while(n){
        if(n%10>m1) m1=n%10;
        if(n%10>m2){
            m1=m2;
            m2=n%10;
        }
        n/=10;
    }
    if(m1<m2) swap(m1, m2);
}

int main(){

    int n, m1, m2;

    cin>>n;

    max_d(n, m1, m2);

    cout<<m1<<" "<<m2;

    return 0;
}