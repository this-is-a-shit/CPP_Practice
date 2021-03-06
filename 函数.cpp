// 函数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
//max() 函数。该函数有两个参数 num1 和 num2，会返回这两个数中较大的那个数：
int max(int num1, int num2) {
	if (num1 > num2)
		return num1;
	else
		return num2;
}

void yanghui(int index) {
	int i, j;
	int triangle[100][100];
	for (int i = 0; i < index; i++) {
		triangle[i][0] = 1;
		triangle[i][i] = 1;
	}
	//赋值
	for (i = 2; i < index; i++) {
		for (j = 1; j < i; j++)
		{
			triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
		}
	}
	//输出
	for (i = 0; i < index; i++) {
		for (j = 0; j <= i; j++) {
			cout << triangle[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int num1, num2;
	char mybuffer[100];
	cout << "请输入两个小于100的整数:" << endl;
	cin.getline(mybuffer, 100);
	num1= atoi(mybuffer);
	cin.getline(mybuffer, 100);
	num2 = atoi(mybuffer);
	num1 = 1;
	num2 = 2;
	int num3 = max(num1, num2);
	yanghui(num3);


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
