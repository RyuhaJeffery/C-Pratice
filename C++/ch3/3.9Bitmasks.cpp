#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    const unsigned int red_mask = 0xFF0000; //red만 뽑아내기 위해서
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;

    cout << std::bitset<32>(red_mask) << endl;

    unsigned int pixel_color = 0xDAA520;

    cout << std::bitset<32>(pixel_color) << endl; // 16진수를 2진수로 변경

    //blue 부분만 추출
    unsigned char blue = pixel_color & blue_mask;
    unsigned char green = (pixel_color & green_mask) >> 8; // 가운데에 있기 때문에

    cout << std::bitset<8>(blue) << endl;
    cout << std::bitset<8>(green) << endl;

    return 0;
}