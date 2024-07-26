#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    vector <int> vec(n);

    for(int i=0; i<n; i++)
    cin >> vec[i];

    sort(vec.begin(), vec.end());

    int left, right, result, ans_left, ans_right;

    left = 0;

    right = n-1;

    result = 2000000001;

    ans_left = 0;

    ans_right = 0;

    while (left < right)
    {
        int sum = vec[left] + vec[right];
        
        if (result > abs(sum))
		{
			result = abs(sum);
			ans_left = vec[left];
			ans_right = vec[right];
		}

		if (sum > 0)
		right--;
		
        else
		left++;
    }
    
    cout << ans_left << " " << ans_right;
}