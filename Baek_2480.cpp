#include <iostream>
using namespace std;

int main(void)
{
    int a,b,c;
    cin >> a >> b >> c;

    int d;

    if(a==b && a==c && b==c)
    d=10000+(a*1000);

    else if(a==b || a==c || b==c)
    {
    d=1000+(a*100);

    if(b==c)
    d=1000+(b*100);
    }

    else
    {
        int tmp;

        if(a<b && b>c)
        tmp=b;

        else if(a<c && c>b)
        tmp=c;

        else
        tmp=a;

        d=100*tmp;
    }

    cout << d;
}