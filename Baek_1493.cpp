#include <iostream>
#include <vector>

using namespace std;

struct cube
{
    int length = 0;
    int cnt = 0;
};

vector<cube> cubes;

int ans = 0;
bool isFail = false;

void box(int length, int width, int height, int idx);

int main()
{
    int length, width, height;
    cin >> length >> width >> height;

    int N;
    cin >> N;

    int cube_idx, cube_cnt;
    for (int i = 0; i < N; i++)
    {
        cin >> cube_idx >> cube_cnt;

        cube cube;
        // 큐브의 한 변의 길이 = 2^cube_idx
        cube.length = (1 << cube_idx);
        cube.cnt = cube_cnt;

        cubes.push_back(cube);
    }

    box(length, width, height, N - 1);

    if (isFail)
        cout << "-1";
    else
        cout << ans;
}

void box(int length, int width, int height, int idx)
{
    if (length == 0 || width == 0 || height == 0)
        return;

    for (int i = idx; i >= 0; i--)
    {
        if (cubes[i].cnt <= 0)
            continue;

        if (length < cubes[i].length || width < cubes[i].length || height < cubes[i].length)
            continue;

        cubes[i].cnt--;
        ans++;

        box(cubes[i].length, width - cubes[i].length, cubes[i].length, i);
        box(length - cubes[i].length, width, cubes[i].length, i);
        box(length, width, height - cubes[i].length, i);

        return;
    }

    isFail = true;
}