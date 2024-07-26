#include<iostream>
using namespace std;

int main(void)
{
    int repeat;

    cin >> repeat;

    for(int i=0; i<repeat; i++)
    {
        string str;

        cin >> str;

        int length = str.length();

        cout << str[0] << str[length-1] << endl;
    }
}