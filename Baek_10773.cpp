#include<iostream>
using namespace std;

int main(void)
{
    int operate;
    int idx=0;

    cin >> operate;

    int stack[operate];

    for(int i=0; i<operate; i++)
    {
        int value;

        cin >> value;

        if(value==0 && idx!=0)
        {
            idx-=1;
        }

        else if(value!=0)
        {
            stack[idx]=value;

            idx+=1;
        }
    }

    int result = 0;

    for(int i=0; i<idx; i++)
    {
        result += stack[i];
    }

    cout << result << endl;
}