#include <iostream>
using namespace std;

int main(void)
{
    int a,b,c;

    cin >> a >> b >> c;

    b=b+c;

    while (b>=60)
    {
    a=a+1; b=b-60;}

    if (a>=24)
    a=a-24;

    cout << a << " " << b;

}