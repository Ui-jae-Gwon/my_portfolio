#include<iostream>
using namespace std;

int main(void)
{
    int times;

    cin >> times;

    for(int i=0; i<times; i++)
    {
        string vps;

        cin >> vps;

        int length = vps.length();

        if(length%2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int left_cnt = 0;
            int rigth_cnt = 0;

            for(int j=0; j<length; j++)
            {   
                if(left_cnt<rigth_cnt)
                {
                cout << "NO" << endl;
                left_cnt = -1;
                break;
                }
                if(vps[j]=='(')
                left_cnt++;
                else if(vps[j]==')')
                rigth_cnt++;
            }

            if(left_cnt==rigth_cnt && left_cnt != -1)
            cout << "YES" << endl;
            else if(left_cnt!=rigth_cnt && left_cnt != -1)
            cout << "NO" << endl;
        }
    }
}