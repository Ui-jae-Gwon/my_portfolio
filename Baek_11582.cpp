#include <iostream>
using namespace std;

int a, section;
void partition(int *temp, int first, int end);
void merge(int *temp, int first, int mid, int end);
int sort_temp[1048576];

int main(void)
{
    cin >> a; // 인풋 받고 2의 제곱 꼴로

    int temp[a]; // a만큼의 개수로 배열 선언

    for(int i=0; i<a; i++) // 값 할당
    {
        cin >> temp[i];
    }

    cin >> section;

    // main 에서 해결하려 하지 말고 함수를 계속 호출해야함

    partition(temp, 0, a-1);

    for(int i=0; i<a; i++)
     cout << temp[i] << ' ';
}

void partition(int *temp, int first, int end)
{
    int full = (end+1); // 총 사람 수 -> section 이랑 비교 할 때 쓰려고 생각함

    if(first < end)
    {
        int mid = (first+end)/2;
        partition(temp, first, mid);
        partition(temp, mid+1, end);
        merge(temp, first, mid, end);
    }
}

void merge(int *temp, int first, int mid, int end)
{
    if((end-first) < (a/section))
    {
        int i, j, k;
        i = first;
        j = mid+1;
        k = 0;
        
        while(i<=mid && j<=end)
        {
            if(temp[i]<=temp[j])
            sort_temp[k++] = temp[i++];
            else
            sort_temp[k++] = temp[j++];
        }
        
        while(i <= mid)
        sort_temp[k++] = temp[i++];
    
        while (j <= end) 
        sort_temp[k++] = temp[j++];
        
        for(int l=first; l<=end; l++)
        temp[l] = sort_temp[l-first];
        
    }
}