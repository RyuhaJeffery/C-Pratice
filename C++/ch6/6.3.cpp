#include <iostream>
using namespace std;

int main()
{
    const int num_students = 5;
    int scores[num_students] = {84, 92, 76, 81, 56};
    //동적할당을 하면 이것도 자동화가 가능하다.

    //오히려 미리 사전에 배열의 크기를 정하는 것이 아니라
    //입력된 숫자를 가지고 계산을 할 수도 있다.

    //역으로 5로 계산되는 것을 알 수 있다.
    //const int num_students = sizeof(scores) / sizeof(int);
    //함수 parameter로 넘어간거면 pointer 주소로 넘어간 거여서 다른 숫자가 나옴

    int max_score = 0;
    int total_score = 0;

    for (int i = 0; i < num_students; i++)
    {
        total_score += scores[i];
        //비교연사자 사용 최대값
        max_score = (max_score < scores[i]) ? scores[i] : max_score;
        // //if 문 사용
        // if (max_score < scores[i])
        //     max_score = scores[i];
    }

    double avg_score = static_cast<double>(total_score) / num_students;

    cout << max_score << endl;

    //배열을 사용하지 않고 구하는 방법
    // int score0 = 84;
    // int score1 = 92;
    // int score2 = 76;
    // int score3 = 81;
    // int score4 = 56;

    // int total_score = score0 + score1 + score2 + score3 + score4;

    // double avg_score = static_cast<double>(total_score) / num_students;

    //다 더하고 나누어줌

    return 0;
}