// 函数小程序.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;
int X = 0;//模拟数据库
bool E = true;
void addStaff();
int addStaff(int number);
void subStaff()
{
	cout << "获取员工信息-------------已完成\n";
	cout << "撤销五险一金-------------已完成\n";
	cout << "正在赶出工位-------------已完成\n";
	cout << "数据库更新中-------------已完成\n";
	cout << "正在发送邮件-------------已完成\n";
	X--;
	cout << "裁员成功，按任意键继续\n";
	cin.get();
}
int getStuffIndex() {
	cout << "正在连接数据库-------------已完成\n";
	cout << "正在查询员工数-------------已完成\n";
	cout << "关闭数据库连接-------------已完成\n";
	return X;
}

int divide(int a, int b = 2) {
	int r;
	r = a / b;
	return (r);
}

void menu() {
	system("cls");
	cout << "欢迎使用全局变量递归公司管理系统\n";
	cout << "请输入对应数字选择功能：\n1.应聘一名新员工\n2.应聘一群新员工\n3.裁员老油条\n4.查询公司人数\n5.退出程序\n";
	//cout << "\n\n练习：\n6.参数默认值\n";
	char mybuffer[100000];
	cin.getline(mybuffer, 100);
	switch (atoi(mybuffer))
	{
	case 1: 
		addStaff();
	break;
	case 2:
		cout << "请输入您需要应聘的员工人数\n";
		cin.getline(mybuffer, 100);
		if (addStaff(atoi(mybuffer))) {
			cout << "添加员工成功，按任意键继续\n";
				cin.get();
		}
		else
		{
			cout << "添加员工失败，按注意您的输入\n";
			cin.get();
		}
		break;
	case 3: 
		
		subStaff();
		break;
	case 4:
		cout << "公司目前人数是:" << getStuffIndex() << "人\n按任意键返回主菜单";
		cin.get();
		break;
	case 5:
		E = false;
		break;
	case 6:
		cout << divide(12)<<endl;
		cout << divide(20, 4) << endl;
		cin.get();
		break;
	default:
		cout << "警告：输入错误，请重新输入。";
		cin.get();
		break;
	}
	if (E)
		menu();
}
int main()
{
	menu();
	return 0;
}
//增加员工
void addStaff()
{
	cout << "获取员工信息-------------已完成\n";
	cout << "申报五险一金-------------已完成\n";
	cout << "正在安排工位-------------已完成\n";
	cout << "数据库更新中-------------已完成\n";
	cout << "正在发送邮件-------------已完成\n";
	X++;
	cout << "添加员工成功，按任意键继续\n";
	cin.get();
}
//参数：int 输入一个int值
//功能：增加自定义数量员工
//返回：int 成功情况（1：成功/0：失败）
int addStaff(int number)
{
	if (number == 0)
		return 0;
	X += number;
	cout << "申报五险一金-------------已完成\n";
	cout << "正在安排工位-------------已完成\n";
	cout << "数据库更新中-------------已完成\n";
	cout << "正在发送邮件-------------已完成\n";
	return 1;
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
