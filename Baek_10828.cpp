#include<iostream>

using namespace std;
int idx=0;
int stack[10000];

int main(void)
{
    stack[0]=-1;

    int operate;

    cin >> operate;

    for(int i=0; i<operate; i++)
    {   
        string operation;

        cin >> operation;

        if(operation == "push")
        {
            int value;

            cin >> value;

            stack[idx]=value;

            idx+=1;
        }

        else if(operation == "top")
        {
            if(idx==0)
            cout << -1 << endl;

            else
            cout << stack[idx-1] << endl;
        }

        else if(operation == "size")
        {
            cout << idx << endl;
        }

        else if(operation == "pop")
        {
            if(idx==0)
            cout << -1 << endl;

            else
            {
            cout << stack[idx-1] << endl;

            idx-=1;
            }
        }

        else if(operation == "empty")
        {
            if(idx==0)
            cout << 1 << endl;
            else
            cout << 0 << endl;
        }
    }
}