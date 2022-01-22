
// 모든 것을 char array로 받아서 입력을 시키는 것
//그래서 자리수가 올라가면 다른 배열에 저장되고 문제는 하나하나(줄 바꿈까지 알아서 해결해주어야한ㄷ.)

#include <iostream> // library that contain basic input/output functions
#include <fstream>  // library that contains file input/output functions
using namespace std;

int main()
{
    int array_size = 1024;              // define the size of character array
    char *array = new char[array_size]; // allocating an array of 1kb
    int position = 0;                   //this will be used incremently to fill characters in the array

    ifstream fin("prob2.txt");
    if (fin.is_open())
    {
        cout << "File open success" << endl;

        while (!fin.eof() && position < array_size)
        {
            fin.get(array[position]);
            position++;
        }
        array[position - 1] = '\0';

        cout << "Displaying Array..." << endl
             << endl;

        for (int i = 0; array[i] != '\0'; i++)
        {
            cout << array[i];
        }

        cout << endl;

        for (int i = 21; i < 30; i++)
        {
            cout << array[i];
        }
    }
    else //file could not be opened
    {
        cout << "File could not be opened." << endl;
    }
    return 0;
}