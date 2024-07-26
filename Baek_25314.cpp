#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;

    int tmp=n/4;
    for(int i=0; i<tmp; i++)
    {
        cout << "long ";
    }
    cout << "int";
}