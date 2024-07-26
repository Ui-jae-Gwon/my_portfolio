#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    vector <int> vec;

    for(int i=0; i<n; i++)
    {
        int val;

        cin >> val;

        vec.push_back(val);
    }

    sort(vec.begin(), vec.end());

    int x;

    cin >> x;

    int left, right, pair;

    left = 0;
    right = n-1;
    pair = 0;

    while (left < right) 
    {
        int temp;
        
        temp = vec[left] + vec[right];

        if (temp < x) 
        left++;

        else if (temp > x) 
        right--;

        else
        {
            left++; 
            right--;
            pair++;
        }
    }

    cout << pair;
}