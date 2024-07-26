/*
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void)
{   
    int n;

    cin >> n;

    vector <pair <int, int>> vec;

    for(int i=0; i<n; i++)
    {
        int val;

        cin >> val;

        vec.push_back(make_pair(val, i+1));
    }

    sort(vec.begin(), vec.end());

    int idx = 0;
    int prev_val;

    for(int i=0; i<n; i++)
    {
        int val;

        val = vec.front().first;

        if(idx == 0)
        {
        prev_val = vec.front().first;

        val = vec.front().second;

        vec.erase(vec.begin() + 0);

        vec.push_back(make_pair(idx, val));

        idx++;
        }

        else if(idx != 0 && val != prev_val)
        {
            prev_val = vec.front().first;

            val = vec.front().second;

            vec.erase(vec.begin() + 0);

            vec.push_back(make_pair(idx, val));

            idx++;
        }

        else if(idx != 0 && val == prev_val)
        {
            prev_val = vec.front().first;

            val = vec.front().second;

            vec.erase(vec.begin() + 0);

            idx-=1;

            vec.push_back(make_pair(idx, val));

            idx++;
        }
    }

    idx = 1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {   
            int val;

            val = vec[j].second;

            if(idx == val)
            {
            cout << vec[j].first << " ";
            idx++;
            }
        }
    }
}
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void)
{   
    int n;
    cin >> n;

    vector<pair<int, int>> vec(n);
    vector<int> compressed(n);

    for(int i=0; i<n; i++) 
    {
        int val;
        cin >> val;
        vec[i] = {val, i};
    }

    sort(vec.begin(), vec.end());

    int idx = 0;

    for(int i=0; i<n; i++) 
    {
        if(i == 0 || vec[i].first != vec[i-1].first) 
        compressed[vec[i].second] = idx++;

        else 
        compressed[vec[i].second] = idx - 1;
    }

    for(int i=0; i<n; i++) 
    cout << compressed[i] << " ";
}