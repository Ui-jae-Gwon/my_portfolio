#include<iostream>
using namespace std;

int main(void)
{
    int a, b, c;

    cin >> a >> b >> c;

    cout << a+b-c << '\n';

    string A, B, C;

    A=to_string(a);
    B=to_string(b);

    string A_B;

    A_B = A+B;

    int a_b;

    a_b=stoi(A_B);

    cout << a_b - c << '\n';
}