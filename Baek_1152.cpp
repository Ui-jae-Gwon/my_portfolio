#include<iostream>
using namespace std;

int main(void)
{
    string str;

    getline(cin, str);

    int length, ans;

    length = str.length();

    ans = 0;

    for(int i=0; i<length; i++)
    {
        if(str[i]!=' ' && str[i]!='\0')
        {
            while(str[i]!=' ' && str[i]!='\0')
            i+=1;

            
            ans+=1;
        }
    }

    cout << ans << '\n';
}