#include <iostream>
using namespace std;

int main (void)
{
    double a, b;

    cin >> a >> b ;

    cout<<fixed;
    cout.precision(100);

    double c= a/b;

    cout << c;
}