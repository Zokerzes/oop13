#pragma once
#include <iostream>
using namespace std;
class Point
{
protected:
	int x; int y;
public:
	Point() {
		x = 0; y = 0;
		cout << "create object Point" << std::endl;
	};
	~Point() { std::cout << "delete object Point" << endl; }
	int& getX() { return x; };
	int& getY() { return y; };
};

