// 指针0-按地址传递参数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
int add(int a, int b) {
	a = a + b;
	return a;
}
void addressadd(int& address1,int& address2){
	address1 = address1 + address2;
}
void duplicate(int& a,int& b,int& c){
	a *= 2;
	b *= 2;
	c *= 2;
}
int main()
{
	int a = 1;
	int b = 1;
	a=add(a, b);

	addressadd(a, b);
	cout << a << endl;
	int x = 1, y = 3, z = 7;
	duplicate(x, y, z);
	int *pp = &x;
	cout << "x=" << x << ",y=" << y << ",z=" << z <<"x's address is"<<&x<< endl;
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
