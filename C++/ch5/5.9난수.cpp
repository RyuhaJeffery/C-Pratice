#include <iostream>
#include <cstdlib> //std::radn(), std::srand()
#include <ctime>
#include <random>

using namespace std;

int main()
{
    //random divice를 만들고
    random_device rd;
    //생성기 64bit짜리 난수를 생성
    //mesenne는 변수명이고 create a mesenne twister,
    mt19937_64 mersenne(rd());
    //1~6 사이의 선택이 된다. 확률은 동일하게 나옴
    uniform_int_distribution<> dice(1, 6);

    for (int i = 0; i < 20; i++)
    {
        cout << dice(mersenne) << endl;
    }

    return 0;
}