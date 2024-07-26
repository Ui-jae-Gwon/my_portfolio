#include<iostream>
#include<algorithm>
using namespace std;

bool comp(string A, string B);

int main(void)
{
    int repeat;

    cin >> repeat;

    string arr[repeat];

    for(int i=0; i<repeat; i++)
    {
        string str;

        cin >> str;

        arr[i] = str;
    }

    sort(arr, arr+repeat, comp);

    string dup = "";
    
    for (int i=0; i<repeat; i++) 
    {
        if (dup == arr[i]) 
        continue;

        cout << arr[i] << endl;

        dup = arr[i];
    }
}

bool comp(string A, string B)
{
    if(A.length() != B.length())
    return A.length() < B.length();

    else
    return A<B;
}