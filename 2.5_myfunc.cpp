// 2.5_myfunc.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void simon(int);

int main()
{
    int count;

    simon(3);
    cout << "Pick an integer: ";
    cin >> count;
    simon(count);

    cin.get();
    cin.get();
    return 0;
}

void simon(int n)
{
    cout << "Simon says touch your toes " << n << " times." << endl;
}

