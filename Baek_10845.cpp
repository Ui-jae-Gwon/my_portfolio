#include<iostream>
using namespace std;

int queue[10000];

int main(void)
{
    int operate;

    int start=0 , end=0;

    cin >> operate;
    for(int i=0; i<operate; i++)
    {
        string operation;

        cin >> operation;

        if(operation=="push")
        {
            int value;

            cin >> value;

            if(start == end)
            {
                queue[start]=value;
                end+=1;
            }
            else
            {
                queue[end]=value;
                end+=1;
            }
        }
        
        else if(operation=="pop")
        {
            if(start == end)
            cout << -1 << endl;

            else
            {
            cout << queue[start] << endl;

            for(int i=0; i<end; i++)
            {
                queue[i]=queue[i+1];
            }

            end-=1;
            }
        }

        else if(operation=="size")
        {
            cout << end << endl;
        }

        else if(operation=="empty")
        {
            if(start==end)
            cout << 1 << endl;

            else
            cout << 0 << endl;
        }

        else if(operation=="front")
        {
            if(start==end)
            cout << -1 << endl;

            else
            cout << queue[start] << endl;
        }

        else if(operation=="back")
        {
            if(start==end)
            cout << -1 << endl;

            else
            cout << queue[end-1] << endl;
        }
    }
}