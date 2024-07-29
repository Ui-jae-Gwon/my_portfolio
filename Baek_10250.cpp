#include <iostream>
using namespace std;

int main(void)
{
    int t, h, w, n;

    cin >> t; // 테스트 케이스 입력

    for(int i=0; i<t; i++)
    {
        cin >> h >> w >> n; // 층 수, 방 수, 손님 수 입력

        int floor_num = n % h;

        int room_num = n / h + 1;

        if (floor_num == 0) // n이 h의 배수일 때
        {
            floor_num = h;

            room_num -= 1;
        }

        // 층 번호는 floor_num, 방 번호는 room_num으로 출력
        if (room_num<10)
        cout << floor_num << '0' << room_num << '\n';

        else
        cout << floor_num << room_num << '\n';
    }

    return 0;
}
