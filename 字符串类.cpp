// 字符串类.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//现在您可能还无法透彻地理解这个实例，因为到目前为止我们还没有讨论类和对象。
//所以现在您可以只是粗略地看下这个实例，等理解了面向对象的概念之后再回头来理解这个实例。

#include "pch.h"
#include <iostream>
#include <string>//string 不属于基本的内置类型，是C++标准库提供的

using namespace std;

int main()
{
	string str1 = "Hello";
	string str2 = "World";
	string str3;
	int  len;
	string str4={ 65,66,67,68,69,70,'\0' };
	// 复制 str1 到 str3
	str3 = str1;
	char i = str3[1];
	if (str3 == str1) {
		cout << "str3 == str1\n";
	}
	else cout << "str3 != str1\n";
	cout << "str3 : " << str3 << endl;
	
	// 连接 str1 和 str2
	str3 = str1 + str2;
	cout << "str1 + str2 : " << str3 << endl;

	// 连接后，str3 的总长度
	len = str3.size();
	cout << "str3.size() :  " << len << endl;
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
/*
_NODISCARD size_type size() const noexcept
{	// return length of sequence
	return (this->_Get_data()._Mysize);
}*/