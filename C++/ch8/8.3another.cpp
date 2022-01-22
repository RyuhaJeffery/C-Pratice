#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Second
{
public:
    Second()
    {
        cout << "class Second constructor()" << endl; //debug하는 방법으로 프린트 찍어줌
    }
};

class First
{
    Second sec;

public:
    First()
    {
        cout << "class First constructor()" << endl;
    }
};

int main()
{
    //Second 생성자가 먼저 실행되고 First가 실행된다.
    First fir;
    return 0;
}