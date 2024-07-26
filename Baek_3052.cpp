#include <iostream>
using namespace std;

int main(void)
{
    int *array = new int [10];
    int *div = new int [10];

    int idx = 0;

    for(int i=0; i<10; i++)
    {
        int a, b;

        cin >> a;

        b= a%42;

        if(i==0)
        {
        array[i]=b;
        idx+=1;
        }

        bool dup = true;

        if(i>=1)
        {
            for(int j=0; j<=idx-1; j++)
            {
                if(array[j]==b)
                {
                    dup = false;
                    break;
                }
            }

            if(dup == true)
            {
            array[idx]=b;
            idx+=1;
            }
        }
    }
    
    cout << idx << endl;
}