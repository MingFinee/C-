#include<iostream>
using namespace std;


//����Ĭ�ϲ���
int func1(int a, int b = 10, int c = 20)
{   //c++�к���������Ĭ���β�
	//���ĳ��λ����Ĭ���βΣ���ô�����λ������Ҫ��Ĭ��ֵ
	return a + b + c;
}
//���������ͺ���ʵ��ֻ����һ����Ĭ�ϲ���
int func2(int a, int b = 100, int c = 1000);
int func2(int a, int b, int c )
{   
	return a + b + c;
}


//������ռλ����
//c++�к������β�����������ռλ������������ռλ�����ú���ʱ�������λ��
//ռλ����Ҳ������ռλ����
int func3(int a,int /*=10*/)
{
	cout << "hello" << endl;
	return 0;
}


//������(chong)��--������������ͬ����߸�����
//��������������
    //1.ͬһ����������
    //2.����������ͬ
    //3.�����������Ͳ�ͬ���߸�����ͬ����˳��ͬ
//*�����ķ���ֵ���Ͳ�ͬ��������Ϊ�������ص�����
void func4()
{
	cout << "func4()�ĵ���" << endl;
}
void func4(int a)
{
	cout << "func4(int a)�ĵ���" << endl;
}
void func4(double a,int b)
{
	cout << "func4(double a,int b)�ĵ���" << endl;
}
void func4(int a, double b)
{
	cout << "func4(int a, double b)�ĵ���" << endl;
}
//int func4(int a, double b)  //error ��������ֵ��������Ϊ�������ص�����
//{
//	cout << "func4(int a, double b)�ĵ���" << endl;
//}
int main()
{
	cout << func1(10) << endl;
	cout << func1(10,20) << endl; //����ʹ�ô��������

	cout << func2(10) << endl;

	func3(1,1);

	func4();
	func4(3.14,10);

	system("pause");
	return 0;
}