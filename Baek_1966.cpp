#include <iostream>
#include <queue>
using namespace std;

int main(void) 
{
    int repeat;

    cin >> repeat;

    for (int i=0; i<repeat; i++) 
    {
        int n, m;
        cin >> n >> m;

        queue<pair<int, int>> queue;
        priority_queue<int> prior_queue;

        for (int j=0; j<n; j++) 
        {
            int prior;
            cin >> prior;
            queue.push({prior, j});
            prior_queue.push(prior);
        }

        int print_cnt = 0;

        while (!queue.empty()) 
        {
            int cnt_prior = queue.front().first;
            int cnt_pos = queue.front().second;

            queue.pop();

            if (cnt_prior == prior_queue.top()) 
            {
                prior_queue.pop();
                print_cnt++;

                if (cnt_pos == m) 
                {
                    cout << print_cnt << endl;
                    break;
                }
            } 
            
            else 
            {
                queue.push({cnt_prior, cnt_pos});
            }
        }
    }
}
