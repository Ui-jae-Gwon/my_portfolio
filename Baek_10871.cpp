#include <iostream>
using namespace std;

int main(void)
{
    int array_num, small_num;

    cin >> array_num >> small_num;

    int *array = new int [array_num];

    for(int i=0; i<array_num; i++)
    {
        int insert_array;

        cin >> insert_array ;

        array[i] = insert_array;
    }

    for(int i=0; i<array_num; i++)
    {
        if(array[i]<small_num)
        {
            cout << array[i] << " ";
        }
    }
}