#include<iostream>
using namespace std;

int main(void)
{
    int repeat;

    cin >> repeat;

    int arr[repeat];

    for(int i=0; i<repeat; i++)
    {
        int num;

        cin >> num;

        arr[i] = num;
    }

    for(int i=0; i<repeat; i++)
    {   
        bool change;

        change = false;

        int small;

        small = arr[i];

        int idx;

        for(int j=i+1; j<repeat; j++)
        {    
            if(small>arr[j])
            {
                idx = j;
                small = arr[j];
                change = true;
            }
        }

        int tmp;

        if(change == true)
        {
            tmp = arr[i];

            arr[i] = small;

            arr[idx] = tmp;
        }
    }

    for(int i=0; i<repeat; i++)
    cout << arr[i] << endl;
}