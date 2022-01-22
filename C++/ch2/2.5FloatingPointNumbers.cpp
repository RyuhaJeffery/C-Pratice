#include <iostream>
#include <iomanip>
#include <limits>

int main()
{
    using namespace std;

    float f(123456789.0f); // 10 significant digits
    double d(0.1);

    cout << std::setprecision(16) << endl; //소수점 밑의 갯수를 지정할 수 있음
    //123456792로 출력됨. 이진수로 저장하기 때문에 오류가 발생 할 수 있음
    cout << f << endl;
    // 이러한 오류가 누적되면 잡아내기 어려울 수 있음
    cout << std::setprecision(1);
    cout << d << endl;
    cout << std::setprecision(18);
    // 부동소수점을 이용해 0.1에 가장 가까운 숫자를 나타낼 수 있는 것이 0.100000000000000006이라는 것이다.
    cout << d << endl; 

    return 0;
}