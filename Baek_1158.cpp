#include<iostream>
#include<queue>
using namespace std;

int main(void)
{
    int people;

    cin >> people;

    queue <int> queue;

    for(int i=0; i<people; i++)
    queue.push(i+1);

    int eliminate;

    cin >> eliminate;

    int period;

    period=1;

    cout << "<";

    while (queue.size()!=0 && eliminate!=1)
    {
        int k;

        k = queue.front();

        queue.pop();

        queue.push(k);

        period++;

        if(period==eliminate)
        {   
            int result;

            result = queue.front();

            cout << result;

            if(queue.size()!=1)
            cout << ", ";

            queue.pop();
            period=1;
        }
    }

    if(eliminate==1)
    {
        for(int i=0; i<people; i++)
        {
            cout << i+1;

            if(people-1 != i)
            cout << ", ";
        }
        
    }

    cout << ">" ;
    
}