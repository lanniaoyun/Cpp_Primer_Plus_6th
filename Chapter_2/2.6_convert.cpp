// 2.6_convert.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int stonetolb(int);

int main()
{
    int stone;
    int pounds;

    cout << "Enter the weight in stone: ";
    cin >> stone;
    pounds = stonetolb(stone);
    cout << stone << " stone = " << pounds << " pounds." << endl;

    cin.get();
    cin.get();
    return 0;
}

int stonetolb(int sts)
{
    return 14 * sts;
}