// 字符数组和字符串类.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

//本章节主讲：
//C风格字符串（字符数组）
//cin.getline()方法
//strcpy_s()函数
//“烫烫烫”与其中的底层原理
//C++ 中的 String 类
#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	//字符数组初始化
	char s1[40] = "Ho";  // 剩余全用0填充
	//int intarray[10] = { 1,2,3 };
	char char1 = 'A';
	char char2 = 72;
	cout << char2 << char1;
	char intarray[] = { 65,66,67,68,69,70,'\0' };
	cout << intarray;
	char s2[20] = { 'H','e','l','l','\0','o','H','e','l','l','o','\0' }; //和上面效果一样
	cout << strlen(s2) << endl;
	char s3[10] = { 'H','e','l','l','o' }; // 和前面效果一样
	//char cArray1[] = { 'H','e','l','l','o' };
	char s5[] = "Hello";
	char cArray2[] = { 'H','e','l','l','o','\0' }; //sizeof = strlen + 1
	//char* p = (char*)malloc(100 * sizeof(char));  //预先申请动态空间
	//strncpy_s(p,sizeof("Hello"), "Hello", 100);
	//*p = 32;
	//cout << cArray1;
	
	//字符数组操作函数
//	strcpy_s(s1,"HELLO");
	//strcpy_s( cArray2,s2);
	//cout << cArray1 << endl;
	//strcpy_s(s2, cArray2);
	
	//strcpy_s(s2, cArray1);
	cout <<s1 << endl;
	cout << s2 << endl;
	char s4[20];
	strcat_s(s1, s2);
	cout << s1 << endl;
	//strcat_s(s1,sizeof(s1), s2);
	cout << s1 << endl;
	cout<<strlen(s1)<<endl<<strlen(s2)<<endl;
	if (!strcmp(s1, s2)) {
		cout << "s1==s2" << endl;
	}
	else {
		cout << "s1!=s2" << endl;
	}
	if (strcmp(s1, s2)==0) {
		cout << "s1==s2" << endl;
	}
	else {
		cout << "s1!=s2" << endl;
	}
	char carray3[] = "hello";
	char s0[10];//代码中未初始化的栈内存全部填成 0xcc，起到保护作用,用字符串来看就是"烫烫烫烫烫烫烫",
	//编译器执行了0XCC，就会产生INT3中断。我们也可以在代码里直接添加INT3中断。单击启动调试即可
	//_asm {INT 3};//0XCC __asm 关键字用于调用内联汇编程序
	//system("pasue");
}


// 结论: 
//C语言规定了一个“字符串结束标志”，以字符’\0’代表。\ /
//如果有一个字符串，其中第10个字符为’\0’，则此字符串的有效字符为9个。
//也就是说，在遇到第一个字符’\0’时，表示字符串结束，由它前面的字符组成字符串。
//系统对字符串常量也自动加一个’\0’作为结束符。
//例如”C Program”共有9个字符，但在内存中占10个字节，最后一个字节’\0’是系统自动加上的。（通过sizeof()函数可验证）
//有了结束标志’\0’后，字符数组的长度就显得不那么重要了，在程序中往往依靠检测’\0’的位置来判定字符串是否结束，而不是根据数组的长度来决定字符串长度

//strcpy_s是根据'\0'判断源字符串结束的
//代码中的str1[9]没有结束符'\0'，
//因此strcpy_s在复制完str1的字符后还在继续赋值其后的内存，
//并且最终复制的字符数大于了目标缓冲区的长度10，因此引发此断言失败。
