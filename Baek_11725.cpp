#include <iostream>
#include <vector>
using namespace std;

int parent[100001];
bool visit[100001];
vector<int> vec[100001];

void tree(int k) 
{
    visit[k]=true;

    for(int i=0; i<vec[k].size(); i++) 
    {
        int next = vec[k][i];

        if(!visit[next]) 
        {
            parent[next]=k;
            tree(next);
        }
    }
}

int main() 
{
    int n;

    cin >> n;

    for(int i=0; i<n-1; i++) 
    {
        int x,y;

        cin >> x >> y;

        vec[x].push_back(y);
        vec[y].push_back(x);
    }

    tree(1);

    for(int i=2; i<=n; i++) 
    cout << parent[i] << "\n";
}