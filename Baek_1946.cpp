#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void)
{
    int t;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        int n;

        cin >> n;

        vector <pair <int, int>> vec;

        for(int j=0; j<n; j++)
        {
            int a, b;

            cin >> a >> b;

            vec.push_back({a, b});
        }

        sort(vec.begin(), vec.end());

        int tmp = 0;

		int ret = 1;

		for(int i=1; i<n; i++)
        {
			if(vec[tmp].second > vec[i].second)
            {
				ret++;
				tmp = i;
			}
		}

		cout << ret << endl;
    }
}