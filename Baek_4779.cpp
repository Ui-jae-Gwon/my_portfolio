#include <iostream>
using namespace std;

void split(char *temp, int first, int end);

int main(void)
{
    int input, number;
    
    while(cin >> input)
    {
    number=1;
    for(int i=0; i<input; i++)
    number=number*3;

    char *temp = new char[number];

    for(int i=0; i<number; i++)
    {
        temp[i]='-';
    }

    split(temp, 0, number);

    for(int i=0; i<number; i++)
    cout << temp[i];

    cout << endl;

    delete[] temp;
    }
}

void split(char *temp, int first, int end)
{   
    if(end-first==1)
    return;

    int mid_first = (end-first)/3;

    
    for(int i=first+mid_first; i<end-mid_first; i++)
    temp[i]=' ';

    split(temp, first, first+mid_first);
    split(temp, end-mid_first, end);   
}