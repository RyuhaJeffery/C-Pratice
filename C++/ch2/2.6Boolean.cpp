#include <iostream>
#include <limits>

int main()
{
    using namespace std;

    char c1(65);
    char c2('A');

    //A A 65 65
    cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

    // c-style casting
    cout << (char)65 << endl;
    cout << (int)'A' << endl;

    //C++ style casting
    cout << char(65) << endl;
    cout << int('A') << endl;

    cout << c1 << " " << static_cast<int>(c1) << endl;

    //char 타입 사이즈 체크
    cout << sizeof(char) << endl;
    cout << (int)std::numeric_limits<unsigned char>::max() << endl;
    cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;

    cout << "This is firstl ine \nsecond line \n";
    //줄바꿈의 아스키코드
    cout << int('\n') << endl;
    cout << int('\t') << endl; //tab

    return 0;
}