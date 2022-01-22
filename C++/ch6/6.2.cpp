#include <iostream>

using namespace std;

#define NUM_STUDENTS 100000

void doSomething(int students_scores[20])
{
    cout << (size_t)students_scores << endl;
    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;
    cout << "Size of doSomething " << sizeof(students_scores) << endl;
}

int main()
{
    const int num_students = 20;
    //cin >> num_students;

    int students_scores[num_students] = {1, 2, 3, 4, 5};

    //주소의 위치를 10진수로 나타낼때는 int 말고 size_t로 사용한다.
    cout << (size_t)students_scores << endl;
    cout << students_scores[0] << endl;
    cout << students_scores[1] << endl;
    cout << students_scores[2] << endl;
    cout << "Size of main " << sizeof(students_scores) << endl;

    doSomething(students_scores);

    return 0;
}