#include <iostream>
using namespace std;

void star(char **matrix, int x, int y, int size);

int main(void)
{
    int number;

    cin >> number;

    char **matrix = new char *[number];

    for(int i=0; i<number; i++)
    matrix[i] = new char [number];

    for(int i=0; i<number; i++)
    {
        for(int j=0; j<number; j++)
        {
            matrix[i][j]='*';
        }
    }

    star(matrix, 0, 0, number);

    for(int i=0; i<number; i++)
    {
        for(int j=0; j<number; j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }

    for(int i = 0; i < number; i++)
    delete[] matrix[i];

    delete[] matrix;
}

void star(char **matrix, int x, int y, int size)
{
    if(size == 1)
    return;

    int cnt = size / 3;

    for(int i=x+cnt; i<x+2*cnt; i++)
    {
        for(int j=y+cnt; j<y+2*cnt; j++)
        matrix[i][j] = ' ';
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i != 1 || j != 1)
                star(matrix, x+i*cnt, y+j*cnt, cnt);
        }
    }
}
