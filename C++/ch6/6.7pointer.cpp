#include <iostream>
using namespace std;

//함수가 포인터로 받을 수도 있고, 변수명으로도 받을 수 있다.
int *doSomething(int *ptr_a)
{

    return nullptr;
}

int main()
{
    int x = 5;

    int *ptr_x = &x, *ptr_y = &x;

    //주소값을 가져옴
    cout << ptr_x << endl;
    //가르키는 주소값의 값을 가져옴
    cout << *ptr_x << endl; 

    return 0;
}