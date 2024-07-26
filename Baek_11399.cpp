#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
    int person;

    cin >> person;

    int arr[person];

    for(int i=0; i<person; i++)
    {
        int val;

        cin >> val;

        arr[i] = val;
    }

    sort(arr, arr+person);

    int time = 0;
    
    for(int i=0; i<person; i++)
    {
        time += (person-i)*arr[i];
    }

    cout << time << endl;
}