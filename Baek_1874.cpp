#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main(void)
{
    int repeat;
    cin >> repeat;

    vector<int> input(repeat);
    for(int i = 0; i < repeat; i++)
    {
        cin >> input[i];
    }

    stack<int> stack;
    vector<char> result;
    int current = 1;
    bool possible = true;

    for(int i = 0; i < repeat; i++)
    {
        int target = input[i];

        while(current <= target)
        {
            stack.push(current);
            result.push_back('+');
            current++;
        }

        if(stack.top() == target)
        {
            stack.pop();
            result.push_back('-');
        }
        else
        {
            possible = false;
            break;
        }
    }

    if(possible)
    {
        for(char op : result)
        {
            cout << op << '\n';
        }
    }
    else
    {
        cout << "NO" << '\n';
    }

    return 0;
}
