#include <iostream>
#include <cmath>
#include <limits>

int main()
{
    using namespace std;

    short s = 1; // 2 bytes = 2 * 8 bits = 16bits 2^16 숫자 가능
    short s1 = 1;
    int i = 1;
    long l = 1;
    long long ll = 1;

    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;
    cout << std::pow(2, sizeof(short) * 8 - 1) - 1 << endl;
    //표현할 수 있는 가장 큰 숫자를 나타냄
    cout << std::numeric_limits<short>::max() << endl;
    cout << std::numeric_limits<short>::min() << endl;
    cout << std::numeric_limits<short>::lowest() << endl;

    //overflow 문제를 주의하라
    s = 32767;
    s++; //32768를 기대하지만

    cout << s << endl; //overflow 숫자를 넘어가면 오히려 뒤로 넘어가게 된다.

    s1 = -32768;
    s1--;

    cout << s1 << endl;

    //int, unsigned int도 각각 다 다르다.

    return 0;
}