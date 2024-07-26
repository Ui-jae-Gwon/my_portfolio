#include <iostream>
using namespace std;

bool determine(string paper, int start, int end);

int main(void)
{
    int input;

    cin >> input;

    for(int i=0; i<input; i++)
    {
        string paper;

        cin >> paper;
        
            bool result = determine(paper, 0, paper.length()-1);

            cout << (result ? "YES" : "NO") << endl;
    }
}

bool determine(string paper, int start, int end)
{
    if(start >= end)
    return true;

    /*
    int length = paper.length();
    int length_mid = length / 2;

    for(int i=0; i<length_mid; i++)
    {
        if(paper[i]=='0')
        {
            if(paper[length-i-1]!='1')
            return false;
        }

        else if(paper[i]=='1')
        {
            if(paper[length-i-1]!='0')
            return false;
        }

        else
        return false;
    }

    return true;
    */

    int a = start;
    int b = end;

    while (a<b)
    {
        if(paper[a]==paper[b])
        return false;

        a++;
        b--;
    }

    return determine(paper, start, b-1);
    
}