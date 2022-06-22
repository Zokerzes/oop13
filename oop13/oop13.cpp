
#include"MyWindow.h"
#include"Point.h"
#include <iostream>
using namespace std;
int main()
{
    MyWindow A(2,2,10,10);
    A.Show();

    A.getX() = 5;
    A.getY() = 3;
    A.getWidth() = 40;
    A.getHeith() = 50;
    A.Show();

    A.moveX(2);
    A.moveY(7);
    A.Show();



}
