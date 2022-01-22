//Literal and Symbolic constants

#include <iostream>

int main()
{
    using namespace std;

    //float면 뒤에 3.14f를 넣어주는게 좋고 아니면 double로 적용되어서 casting 된다.
    float pi = 3.14;

    //bitwise

    unsigned int a = 3;

    cout << std::bitset<4>(a) << endl;

    unsigned int b = a << 2; //2자리 위로 shift 시킨 것

    cout << std::bitset<8>(b) << " " << b << endl;
    //pow(2, x) 2의 몇제곱을 하고 싶을 때에는 shift operator를 사용하는게 더 빠르다
    //아래 식을 함수로 만들어 두었다면 더 빠르지 않았을 까?
    

    return 0;
}