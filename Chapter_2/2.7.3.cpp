// 2.7.3.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void func1(void);
void func2(void);

int main()
{
    func1();
    func1();
    func2();
    func2();

    cin.get();
    return 0;
}

void func1(void)
{
    cout << "Three blind mice." << endl;
}

void func2(void)
{
    cout << "See how they run." << endl;
}
