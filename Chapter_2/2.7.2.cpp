// 2.7.2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int longtoyard(int);

int main()
{
    int furlong;
    int yard;

    cout << "Enter the distance in furlong: ";
    cin >> furlong;
    yard = longtoyard(furlong);
    cout << furlong << " furlongs = " << yard << " yards." << endl;

    cin.get();
    cin.get();
    return 0;
}

int longtoyard(int fur)
{
    return fur * 220;
}