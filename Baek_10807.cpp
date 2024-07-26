#include <iostream>
using namespace std;

int main(void)
{
    int array_num;

    cin >> array_num;

    int *array = new int [array_num];

    for(int i=0; i<array_num; i++)
    {
        int tmp;

        cin >> tmp;
        array[i]=tmp;
    }

    int find_num;
    int call=0;

    cin >> find_num;

    for(int i=0; i<array_num; i++)
    {
        
        if(array[i]==find_num)
        {
            call++;
        }
    }

    cout << call;
}