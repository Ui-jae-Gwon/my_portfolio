#include <iostream>
using namespace std;

int main(void)
{
    int array_num;

    cin >> array_num;
    
    int *array = new int[array_num];

    for(int i=0; i<array_num; i++)
    {
        int insert_array;

        cin >> insert_array;

        array[i]=insert_array;
    }

    int min, max;

    for(int i=0; i<array_num; i++)
    {
        

        if(i==0)
        {
        min= array[i];
        max= array[i];
        }

        if(max<array[i])
        max=array[i];

        if(min>array[i])
        min=array[i];
    }

    cout << min << " " << max;
}