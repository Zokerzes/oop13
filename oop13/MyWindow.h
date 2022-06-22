#pragma once
#include <iostream>
#include "Point.h"
#include <iostream>
using namespace std;
class MyWindow :public Point {
	int widht;
	int height;
public:
	MyWindow(int W, int H) {
		widht = W;
		height = H;
		cout << "create object MyWindow" << endl;
	};
	~MyWindow() { cout << "delete object MyWindow" << endl; };
	int& getWidth() { return widht; };
	int& getHeith() { return height; };

	void moveX(int DX) { x += DX; };
	void moveY(int DY) { y += DY; };

	void Show() {
		cout << "------------\n\n";
		cout << "X = " << x << "\n\n";
		cout << "Y = " << y << "\n\n";
		cout << "W = " << widht << "\n\n";
		cout << "H = " << height << "\n\n";
		cout << "------------\n\n";
	};

};
