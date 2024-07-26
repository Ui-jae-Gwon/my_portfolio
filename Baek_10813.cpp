#include <iostream>
using namespace std;

int main(void)
{
    int bucket, trynum;

    cin >> bucket >> trynum;

    int *array = new int [bucket];

    for(int i=0; i<bucket ; i++)
    {
        array[i]=i+1;
    }

    for(int j=0; j<trynum ; j++)
    {
        int a, b, tmp;

        cin >> a >> b;

        tmp= array[a-1];
        array[a-1]=array[b-1];
        array[b-1]=tmp;
    }

    for(int k=0; k<bucket; k++)
    {
        cout << array[k] << " ";
    }
}