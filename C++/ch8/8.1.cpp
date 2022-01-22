// 객체지향 프로그래밍 필요한 이유
//객체라는 것은
//Friend : name, address, age, height, weight, .... 이런 변수들과
//      print()같이 function들을 묶어 놓은 것을 이야기 함

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//친구들의 명단을 정리한다면
// Firend : name, address, age, height, weight, ...

class Friend //object라는 것을 문법적으로 표현하는 것
{
public: //access specifier (public, private, protected)
    string name;
    string address;
    int age;
    double height;
    double weight;

    //print라는 function도 member가 됨. 즉 바로 접근이 가능하다.
    void print()
    {
        cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
    }
};

void print(const Friend &fr)
{
    cout << fr.name << " " << fr.address << " " << fr.age << " " << fr.height << " " << fr.weight << endl;
    //fr이 중복되는 느낌 -> 이 함수를 struct 안에 넣어버림
}

void print(const string &name, const string &address, const int &age, const double &height, const double &weight)
{
    cout << name << " " << address << " " << age << " " << height << " " << weight << endl;
}

int main()
{

    // 여기에 여러개의 변수를 정의하는 것 보다 struct로 하나로 묶음
    //instanciation. 실제 메모리에 차지하게 만들어 주는 것
    //아래의 것은 class의 instance
    Friend jj{"Jack Jack", "Uptown", 2, 30, 10};

    jj.print();

    //밑에 코드처럼 하나하나 vector를 만드는 것 보다 Friend의 vector를 만들면 된다.
    vector<Friend> my_friends;
    my_friends.resize(2);

    //몇번째 친구의 정보를 출력
    for (int i = 0; i < 10; i++)
    {
        my_friends[i].print();
    }
    //print(jj);
    //print(jj.name, jj.address, jj.age, jj.height, jj.weight) ;
    //매개변수를 위처럼 하는게 아니라 하나의 struct로 받아버리는 것

    // vector<string> name_vec;
    // vector<string> addr_vec;
    // vector<int> age_vec;
    // vector<double> height_vec;
    // vector<double> weight_vec;

    // //특정한 index값을 넣어주어야 함, 매번 넣어주는 것이 꽤나 불편함
    // print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);

    // ------------------

    //struct를 만듬
    return 0;
}