#include <iostream>
#include"getVolumeSurface.h"
using namespace std;

int main()
{
    double wide, height, depth;
    cout << "幅を入力:";
    cin >> wide;
    cout << "高さを入力:";
    cin >> height;
    cout << "奥行を入力:";
    cin >> depth;
    double volume,surfase;
    volume = getVolumeSurface(wide,height,depth,&surfase);
    cout << "体積は" << volume << endl << "表面積は" << surfase << endl;
    return 0;

}

