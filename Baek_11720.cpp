#include<iostream>
using namespace std;

int main(void)
{
    int n, result;

    cin >> n;

    string num;

    cin >> num;

    result = 0;
    
    for(int i=0; i<n; i++)
    {
        result += num[i] - '0';
    } 

    cout << result;
}