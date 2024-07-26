#include<iostream>
using namespace std;

int main(void)
{
    int result;

    result = 0;

    for(int i=0; i<5; i++)
    {
        int val;

        cin >> val;

        val = val * val;

        result += val;
    }

    result %= 10;

    cout << result;
}