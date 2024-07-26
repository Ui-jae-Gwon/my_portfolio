#include <iostream>
using namespace std;

int main(void)
{
    int *array = new int [30];

    for(int i=0; i<28; i++)
    {
        int insert_array;

        cin >> insert_array;

        array[i]=insert_array;
    }

    int *compare = new int [30];
    
    for(int j=0; j<30; j++)
    {
        compare[j]=j+1;
    }

    for(int k=0; k<30; k++)
    {
        for(int t=0; t<30; t++)
        {
            if(array[t]==compare[k])
            {
                compare[k]=0;
            }
        }
    }

    for(int s=0; s<30; s++)
    {
        if(compare[s]!=0)
        {
            cout<<compare[s] << '\n';
        }
    }
}