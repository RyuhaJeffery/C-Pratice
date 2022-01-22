#include <iostream>

int main()
{

    using namespace std;

    /// bit flags
    bool item1_flag = false;
    bool item2_flag = false;
    bool item3_flag = false;
    bool item4_flag = false;

    //event!
    item1_flag = true;

    //die! item2 lose

    item2_flag = false;
    if (item3_flag == true)
    {
        //event
    }

    // 아이템이 바뀌는 것
    if (item3_flag == true && item4_flag == false)
    {
        item3_flag = false;
        item4_flag = true;
    }

    //bit flags
    unsigned char items_flags = 0;
    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;
    //opt4, 5, 6, 7도 같은 방식으로 가능함
    cout << bitset<8>(items_flags) << "\n"
         << endl;
    cout << bitset<8>(opt0) << endl;
    cout << bitset<8>(opt1) << endl;
    cout << bitset<8>(opt2) << endl;
    cout << bitset<8>(opt3) << endl;

    cout << "No item " << bitset<8>(items_flags) << endl;

    //item0 on
    items_flags |= opt0; //bitwise OR 아이템이 있는지 찍어봄
    cout << "Item0 obtained " << bitset<8>(items_flags) << endl;

    //item3 on
    items_flags |= opt3; //bitwise OR 아이템이 있는지 찍어봄
    cout << "Item0 obtained " << bitset<8>(items_flags) << endl;

    //item3 lost
    items_flags &= ~opt3;
    cout << "Item3 lost" << bitset<8>(items_flags) << endl;

    // has item1 ?
    if (items_flags & opt1)
    {
        cout << "Has item1" << endl;
    }
    else
    {
        cout << "Not have item1" << endl;
    }

    // has item0 ?
    if (items_flags & opt0)
    {
        cout << "Has item0" << endl;
    }
    else
    {
        cout << "Not have item0" << endl;
    }

    //obtain item 2, 3
    items_flags |= (opt2 | opt3); // 두개의 아이템을 동시에 작동시키는 것

    cout << bitset<8>(opt2 | opt3) << endl;
    cout << "Item0 obtained " << bitset<8>(items_flags) << endl;

    if ((items_flags & opt2) && !(items_flags & opt1))
    {
        items_flags ^= opt2; //상태를 바꾸어 줄때는 XOR
        items_flags ^= opt1;
    }

    cout << bitset<8>(items_flags) << endl;

    return 0;
}