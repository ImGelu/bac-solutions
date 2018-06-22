#include <iostream>

using namespace std;

void triplete(int a, int b, int c){
    bool exista=0;

    for(int x=a; x<=b; x++)
        for(int y=x; y<=b; y++)
            for(int z=y; z<=b; z++)
                if(x+y+z==c){
                    exista=1;
                    cout<<"{"<<x<<","<<y<<","<<z<<"}";
                }

    if(!exista) cout<<"nu exista";

}

int main()
{
    int a, b, c;

    cin>>a>>b>>c;

    triplete(a, b, c);

    return 0;
}
