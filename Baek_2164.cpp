#include<iostream>
#include<queue>
using namespace std;

int main(void)
{
    queue <int> queue;

    int num;

    cin >> num;

    for(int i=0; i<num; i++)
    {
        queue.push(i+1);
    }
    
    while(queue.size()!=1)
    {
        queue.pop();

        int a;
        a = queue.front();

        queue.pop();

        queue.push(a);
    }

    int result;

    result = queue.front();

    cout << result << endl;
}