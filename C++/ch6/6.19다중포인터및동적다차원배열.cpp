#include <iostream>

using namespace std;

int main()
{
    const int row = 3;
    const int col = 5;

    //두번째 col은 표시를 해주어야 함
    const int s2da[row][col] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}};

    // 이중포인터를 이용한 2d array 만드는 방법
    int **matrix = new int *[row];

    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
    }

    //초기화
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrix[i][j] = s2da[i][j];
        }
    }

    //print all element
    for (int i = 0; i < row; i++)
    {
        for (int c = 0; c < col; c++)
        {
            cout << matrix[i][c] << " ";
        }
        cout << endl;
    }

    //delete
    for (int i = 0; i < row; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;

    return 0;
}
