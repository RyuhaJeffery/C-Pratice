#include <iostream>
using namespace std;

int main()
{
    // memory leak
    //메모리를 사용하고 제거하는게 아니라 계속 쓰는거임
    while (true)
    {
        int *ptr = new int;
        cout << ptr << endl;
    }

    return 0;
}