// 2.4_sqrt.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double area;
    double side;

    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
    cout << "How fascinating!";

    cin.get();
    cin.get();
    return 0;
}

