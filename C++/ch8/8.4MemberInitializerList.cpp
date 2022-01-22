#include <iostream>
#include <string>
#include <vector>
using namespace std;

class B
{
private:
    int m_b;

public:
    B(const int &m_b_in)
        : m_b(m_b_in) {}
};

class Something
{
private:
    int m_i;
    double m_d;
    char m_c;
    int m_arr[5] = {100, 200, 300, 400, 500};
    B m_b;
    //default 값 넣고 할 수도 있음.

public:
    //initializer list
    Something()
        : m_i(1), m_d(3.14), m_c('a'), m_arr(), m_b(m_i - 1)
    {
        // m_i = 1;
        // m_d = 3.14;
        // m_c = 'a';
    }

    void print()
    {
        cout << m_i << " " << m_d << " " << m_c << endl;
        for (auto &e : m_arr)
            cout << e << " ";
        cout << endl;
    }
};

int main()
{
    Something som;
    som.print();
    return 0;
}