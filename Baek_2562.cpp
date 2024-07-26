#include <iostream>
using namespace std;

int main(void)
{
    int *array = new int [9];

    for(int i=0; i<9; i++)
    {
        int insert_array;

        cin >> insert_array;

        array[i]=insert_array;
    }

    int max, max_num;

    for(int i=0; i<9; i++)
    {
        if(i==0)
        {
        max=array[i];
        max_num=i+1;
        }

        if(max<array[i])
        {
            max=array[i];
            max_num=i+1;
        }
    }

    cout << max << "\n" << max_num;
}