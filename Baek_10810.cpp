#include <iostream>
using namespace std;

int main(void)
{
    int bucket, trynum;

    cin >> bucket >> trynum;

    int *array = new int [bucket];

    for(int i=0; i<trynum; i++)
    {
        int insert_array, first, end;

        cin >> first >> end >> insert_array;

        for(first; first<=end; first++)
        {
            array[first-1]=insert_array;
        }
    }

    for(int j=0; j<bucket; j++)
    {
        cout << array[j] << " ";
    }
}