// 指针4-动态数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include<stdlib.h>
using namespace std;
char buffer[10];
int main()
{
	/*
	strlen():获取数组长度
	int lenth = strlen(sca);

	rand():返回一个1-100的随机整数
	int i=rand();
	*/
	char sca[10] = { 48,48,'\0',49,49,49,48,48,48 };
	int lenth = strlen(sca);
	int i=rand();
	char* str = new char[i];
	cout << strlen(str)<<endl;
	char sca3[10];
	//char sca2[lenth];
	str = sca;
	cout<<str<<endl;

	char sca2[] = { 83,79,83,'\0' };//静态char数组
	char* dca = new char[strlen(sca2)];
	dca = sca2;
	cout << dca << endl;

	
	cin.getline(buffer, 10);
	cout << "cin's lenth=" << strlen(buffer) << endl;
	char* gstr = new char[strlen(buffer)];
	gstr=buffer;
	cout << gstr;

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
