// CPPApp1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
//#include <iostream>
//using namespace std;
int main()
{
	
   // std::cout << "Hello World!\n"; 
	//int billy[5];
	int i,j,n;
	//i = 0;
//	int i = 0;

	//j = 1;
	//cout << "我被執行完了，i=" << i << endl;
	int billy[] = {
	1,
	2,
	3,
	4,
	5
	};
	i = billy[0];
	j = 233;
	billy[2]=j;
	i = j;
	
	int billy2[5] = { 1,2 };
	int billy3[5];
	billy3[0] = 1;
	int billy4[3][3] = { {1,2,3},{1,2,2},{1,1,1} };
	billy4[2][2] = -1;
	int k = billy4[1][2];
	billy2[3] = 3;
	billy2[4] = 4;
	//system("pause");
	/*for (i = 4; i >=0; i--) {
		cout << billy[i] <<std::endl;
	}*/
	//
	//int score[10];
	//int i, j, n, total;
	//total = 0;
	//bool flag = true;
	//flag = false;
	//if (flag) {}
	//flag = 1;
	//if (flag) {
	//	flag = 0;
	//}

	//flag = -1;
	//flag = -199;
	//flag = 199;

	//flag = !(1 < 0);
	//if (flag) {
	//	cout <<"我被執行了";
	//	for (i = 9; i >= 0; i--) {
	//		cin >> score[i];
	//		total = total + score[i];
	//	}
	//	cout << endl;
	//	for (i = 9; i >= 0; i--)
	//	{
	//		cout << score[i] << " ";
	//	}
	//	cout << "The average score is:" << total / 10;
	//}
	//else if(false)
	//{ 
	//	cout << "我沒被執行"; 
	//}
	//else if (true)
	//{
	//	cout << "我沒被執行";
	//}
	//else if (true)
	//{
	//	cout << "我沒被執行";
	//}
	//else {

	//cout << "我沒被執行";
	//
	//}
	
	
	//system("pause");
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
