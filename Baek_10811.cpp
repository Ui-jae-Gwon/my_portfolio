#include<iostream>
using namespace std;

int main(void)
{
    int n, m;

    cin >> n >> m;

    int arr[n];

    for(int i=0; i<n; i++)
    arr[i]= i+1;

    for(int i=0; i<m; i++)
    {
        int a, b;

        cin >> a >> b;


        while(a<b)
        {
            int tmp;
            tmp = arr[a-1];
            arr[a-1] = arr[b-1];
            arr[b-1] = tmp;

            a++;
            b--;
        }
    }

    for(int i=0; i<n; i++)
    cout << arr[i] << " ";
}