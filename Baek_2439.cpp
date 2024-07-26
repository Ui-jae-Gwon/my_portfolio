#include <iostream>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n;
    cin >> n;

    for(int k=1; k<=n; k++)
    {

    for(int j=n-k+1; j>1    ; j--)
    {
        cout << " ";
    }   

    for(int i=0; i<k; i++)
    {
        cout << "*";
    }

    cout<< "\n";
    }
}