
// 指针3-作业.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int* dia = new int[10];//动态分配int数组内存
	char* dca = new char[10];
	for (int i = 0; i < 9; i++) {
		if (i > 2 && i < 6)//控制
			*(dia+i)=1;//指针操作
		else *(dia+i) = 0;
	}
	char sca[4] = { 83,79,83 };//静态char数组
	dca = sca;
	for (int i = 0; i < 9; i++)
		cout << *(dia + i);//for循环遍历方式输出数组
	cout<< endl << sca<<endl<<dca;//char[]可直接输出流输出
	delete dia;
	cin.get();
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
