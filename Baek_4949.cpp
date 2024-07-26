#include <iostream>
using namespace std;

char stack[100];
int idx = 0;

int main(void) 
{
    string sentence;

    while (true) 
    {
        getline(cin, sentence);

        if (sentence == ".")
            break;

        idx = 0;  
        bool error = false;  

        int length = sentence.length();

        for (int i = 0; i < length; i++) {
            if (sentence[i] == '(' || sentence[i] == '[') 
            {
                stack[idx] = sentence[i];
                idx++;
            } 
            else if (sentence[i] == ')') 
            {
                if (idx == 0 || stack[idx - 1] != '(') 
                {
                    error = true;
                    break;
                } 
                else 
                {
                    idx--;
                }
            } 
            else if (sentence[i] == ']') 
            {
                if (idx == 0 || stack[idx - 1] != '[') 
                {
                    error = true;
                    break;
                } 
                else {
                    idx--;
                }
            }
        }

        if (error || idx != 0)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
}
