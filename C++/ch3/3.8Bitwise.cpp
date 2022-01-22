#include <iostream>

int main()
{

    using namespace std;

    unsigned int a = 3;
    unsigned int b;

    cout << std::bitset<4>(a) << endl;

    //bitwise operator
    cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;
    cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
    cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
    cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;

    a = 0b1100;
    b = 0b0110;

    cout << std::bitset<4>(a & b) << endl; //and
    cout << std::bitset<4>(a | b) << endl; //or
    cout << std::bitset<4>(a ^ b) << endl; //xor

    return 0;
}