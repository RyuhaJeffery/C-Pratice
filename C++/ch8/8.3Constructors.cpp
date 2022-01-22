#include <iostream>
#include <string>
#include <vector>
using namespace std;

//분수를 나타내는 클래스
class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    // 생성자라는 것을 만듬
    //반환하는 것이 없고 클래스와 이름이 동일 하면 생성자
    //외부에서 쓰려는 것이 아니고 선언과 동시에 생성이 된다
    Fraction(const int &num_int, const int &den_int = 1)
    {
        m_numerator = num_int;
        m_denominator = den_int;

        cout << "Fraction() constructor" << endl;
    }

    void print()
    {
        cout << m_numerator << "/" << m_denominator << endl;
    }
};

int main()
{
    //Fraction frac; //생성자의 parameter가 없을 경우에 빼야함!
    // frac.m_numerator = 0;
    // frac.m_denominator = 1;
    //frac.print();
    Fraction one_thirds(3, 3);
    one_thirds.print();
    Fraction one_one(1);
    one_one.print();

    return 0;
}