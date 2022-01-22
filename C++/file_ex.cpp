// 읽어내는 것 같지만 글자와 숫자를 구별하지 못한다.

#include <iostream>
#include <fstream> // 입출력 헤더
using namespace std;
int main()
{
    int arr[4][2] = {{1, 2}, {3, 4}};

    int temp;

    for (int i = 0; i < 2; i++)
    {
        swap(arr[0][i], arr[1][i]);
    }

    cout << arr[0][0] << " " << arr[0][1] << endl;
    cout << arr[1][0] << " " << arr[1][1] << endl;

    return 0;
}