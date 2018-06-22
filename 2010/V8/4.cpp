#include <iostream>

using namespace std;

int main()
{
    int m1=-1, m2=-1, m3=-1, n, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(x%10==5){
            if(x>m3){
                m2=m3;
                m3=x;
            }
            else if(x>m2){
                m1=m2;
                m2=x;
            }
            else if(x>m1) m1=x;
        }
    }

    cout<<m1<<" "<<m2<<" "<<m3;

    return 0;
}
