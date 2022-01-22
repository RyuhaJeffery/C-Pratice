#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Date
{
    //public: //access specifier로 클래스 안의 변수들을 밖에서 접근하게 or not
    int m_month;
    int m_day;
    int m_year;

public:
    void setDate(const int &month_input, const int &day_input, const int &year_input)
    {
        m_month = month_input;
        m_day = day_input;
        m_year = year_input;
    }

    //variable들은 private이더라도 function은 Encapsulation을 통해서 접근 가능하게 할 수 있음

    void setMonth(const int &month_input)
    {
        m_month = month_input;
    }

    void setDay(const int &day_input)
    {
        m_day = day_input;
    }

    void setYear(const int &year_input)
    {
        m_year = year_input;
    }

    //위는 setters 아래는 getters
    //VO 설정할때 사용하던 것
    //프린트 할때는 return 값으로 직접 보내주는 방법
    const int &getDay()
    {
        return m_day;
    }

    const int &getMonth()
    {
        return m_month;
    }

    const int &getYear()
    {
        return m_year;
    }

    void copyFrom(const Date &original)
    {
        m_month = original.m_month;
        m_day = original.m_day;
        m_year = original.m_year;
    }
};

int main()
{
    Date today;
    // today.m_month = 3;
    // today.m_day = 4;
    // today.m_year = 2021
    today.setDate(3, 1, 2021);
    today.setMonth(4);

    //cout << today.getday() << endl;
    Date copy;
    copy.copyFrom(today);

    return 0;
}