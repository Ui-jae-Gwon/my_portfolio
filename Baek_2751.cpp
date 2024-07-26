#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(void)
{
    int repeat, num;

    cin >> repeat;

    vector <int> vec;

    for(int i=0; i<repeat; i++)
    {
        cin >> num;

        vec.push_back(num);
    }

    sort(vec.begin(), vec.end());

    for(int i=0; i<repeat; i++)
    cout << vec[i] << '\n';
}