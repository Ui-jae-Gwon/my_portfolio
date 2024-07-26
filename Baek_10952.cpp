#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int a,b;

    while(true)
    {
        cin >> a >> b;

        if(a==0 && b==0)
        {
        break;
        }

        else
        {
        cout << a+b << "\n";
        }
    }
}