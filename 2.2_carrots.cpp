// 2.2_carrots.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    carrots = 25;
    cout << "I have ";
    cout << carrots;
    cout << " carrots." << endl;
    carrots = carrots - 1;
    cout << "Crunch, Crunch. Now I have " << carrots << " carrots." << endl;

    cin.get();
    return 0;
}

