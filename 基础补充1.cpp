#include <iostream> //input output stream 输入输出流
using namespace std;//使用std 的名称空间,cin cout在其中，也可在cin\cout	前加std::
#include<string>

int main()
{
	cout << "hello world" << endl; //end of line换行
	int a = 10;
	cout << "a=" << a << endl;
	cout << a << endl;

	cout << "a所占内存空间为：" << sizeof(a) << endl;
	cout << "int所占内存空间为：" << sizeof(int) << endl;
	cout << "int*所占内存空间为：" << sizeof(int*) << endl;

	//转义字符  \n--换行符  \\--反斜杠  \t--水平制表符
	cout << "\\" << endl;
	cout << "abcd\thahaha" << endl; //具有对齐效果
	cout << "ab\thahaha" << endl;

	//字符串风格 string类
	char arr[] = "abcde";
	string brr = "abcde";
	cout << arr << endl;
	cout << brr << endl;
	cout << arr + brr << endl;//可以相加

	//bool数据类型(1字节)；true--真（非0） false--假（0）
	bool flag1 = true;
	bool flag2 = false;
	cout << flag1 << endl;
	cout << flag2 << endl;
	cout << sizeof(bool) << endl;

	//地址
	int crr[5] = { 1,2,3,4,5 };
	cout << crr << endl;
	cout << &crr[0] << endl;
	cout << (int)crr << endl;

	//new 在堆区开辟数据
	int *p = new int(10);
	cout << *p << endl;
	delete p;
	p = NULL;

	int* pa = new int[10];
	for (int i = 0; i < 10; i++)
		pa[i] = i + 100;
	for (int i = 0; i < 10; i++)
		cout << pa[i] << endl;
	delete[] pa;

	//引用：给变量起别名  数据类型 &别名=原名
	int i = 10;
	int& j = i;  //引用必须初始化，且初始化后不可更改
	cout << j << endl;
	j = 11;
	cout << i << endl;
    

	//C++的数据输入
	int x = 0;
	float y = 3.14;
	char z = 'a';
	string w = "adsdf";
	bool h = false;
	cout << "\n\n给整形x赋值" << endl;
	cin >> x;
	cout << x << endl;

	cout << "\n\n给浮点型y赋值" << endl;
	cin >> y;
	cout << y << endl;

	cout << "\n\n给字符型z赋值" << endl;
	cin >> z;
	cout << z << endl;

	cout << "\n\n给字符串型w赋值" << endl;
	cin >> w;
	cout << w << endl;

	cout << "\n\n给布尔类型h赋值" << endl;
	cin >> h;
	cout << h << endl;	//只要是非0值都代表真

	system("pause");
}
