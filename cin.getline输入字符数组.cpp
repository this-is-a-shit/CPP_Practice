// cin.getline输入字符数组.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

//方法：istream& getline (char* s, streamsize n );
//从istream中读取至多n个字符(包含结束标记符)保存在s对应的数组中。即使还没读够n个字符，

//拓展：istream& getline (char* s, streamsize n, char delim );
//上述方法的【重载】:如果遇到delim 或 字数达到限制，则读取终止，delim都不会被保存进s对应的数组中。
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	char mybuffer[10];
    cout << "Hello,What's your name?\n";
	cin.getline(mybuffer,10);
	cout << "Hello," << mybuffer << endl;
}
