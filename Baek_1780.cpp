#include <iostream>

using namespace std;

void split(int **matrix, int x, int y, int size);

int cnt_minus=0 , cnt_zero=0 , cnt_plus=0 ; // -1 0 1 개수를 담을 변수

int main(void)
{
    int n;
    cin >> n;

    int **matrix = new int *[n];

    for(int i=0; i<n; i++)
    matrix[i] = new int [n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    split(matrix, 0, 0, n);

    cout << cnt_minus << endl << cnt_zero << endl << cnt_plus << endl;
}

void split(int **matrix, int x, int y, int size)
{
    int first_value;
    bool same = true;

    first_value = matrix[x][y];

    for(int i=x; i<x+size; i++)
    {
        for(int j=y; j<y+size; j++)
        {
            if(matrix[i][j]!=first_value)
            {
                same = false;
                break;
            }
        }
        if(same == false)
        break;
    }


    if(same)
    {
        if(first_value==-1)
        cnt_minus+=1;
        else if(first_value==0)
        cnt_zero+=1;
        else
        cnt_plus+=1;
    }
    else
    {
        int new_size = size / 3;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            split(matrix, x+i*new_size, y+j*new_size, new_size);
        }
    }
}