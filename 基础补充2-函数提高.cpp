#include<iostream>
using namespace std;


//函数默认参数
int func1(int a, int b = 10, int c = 20)
{   //c++中函数可以有默认形参
	//如果某个位置有默认形参，那么从这个位置往后都要有默认值
	return a + b + c;
}
//函数声明和函数实现只能有一个有默认参数
int func2(int a, int b = 100, int c = 1000);
int func2(int a, int b, int c )
{   
	return a + b + c;
}


//函数的占位参数
//c++中函数的形参泪飙里可以有占位参数，用来作占位，调用函数时必须填补该位置
//占位参数也可以有占位参数
int func3(int a,int /*=10*/)
{
	cout << "hello" << endl;
	return 0;
}


//函数重(chong)载--函数名可以相同，提高复用性
//重载需满足条件
    //1.同一个作用域下
    //2.函数名称相同
    //3.函数参数类型不同或者个数不同或者顺序不同
//*函数的返回值类型不同不可以作为函数重载的条件
void func4()
{
	cout << "func4()的调用" << endl;
}
void func4(int a)
{
	cout << "func4(int a)的调用" << endl;
}
void func4(double a,int b)
{
	cout << "func4(double a,int b)的调用" << endl;
}
void func4(int a, double b)
{
	cout << "func4(int a, double b)的调用" << endl;
}
//int func4(int a, double b)  //error 函数返回值不可以作为函数重载的条件
//{
//	cout << "func4(int a, double b)的调用" << endl;
//}
int main()
{
	cout << func1(10) << endl;
	cout << func1(10,20) << endl; //优先使用传入的数据

	cout << func2(10) << endl;

	func3(1,1);

	func4();
	func4(3.14,10);

	system("pause");
	return 0;
}