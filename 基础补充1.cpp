#include <iostream> //input output stream ���������
using namespace std;//ʹ��std �����ƿռ�,cin cout�����У�Ҳ����cin\cout	ǰ��std::
#include<string>

int main()
{
	cout << "hello world" << endl; //end of line����
	int a = 10;
	cout << "a=" << a << endl;
	cout << a << endl;

	cout << "a��ռ�ڴ�ռ�Ϊ��" << sizeof(a) << endl;
	cout << "int��ռ�ڴ�ռ�Ϊ��" << sizeof(int) << endl;
	cout << "int*��ռ�ڴ�ռ�Ϊ��" << sizeof(int*) << endl;

	//ת���ַ�  \n--���з�  \\--��б��  \t--ˮƽ�Ʊ��
	cout << "\\" << endl;
	cout << "abcd\thahaha" << endl; //���ж���Ч��
	cout << "ab\thahaha" << endl;

	//�ַ������ string��
	char arr[] = "abcde";
	string brr = "abcde";
	cout << arr << endl;
	cout << brr << endl;
	cout << arr + brr << endl;//�������

	//bool��������(1�ֽ�)��true--�棨��0�� false--�٣�0��
	bool flag1 = true;
	bool flag2 = false;
	cout << flag1 << endl;
	cout << flag2 << endl;
	cout << sizeof(bool) << endl;

	//��ַ
	int crr[5] = { 1,2,3,4,5 };
	cout << crr << endl;
	cout << &crr[0] << endl;
	cout << (int)crr << endl;

	//new �ڶ�����������
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

	//���ã������������  �������� &����=ԭ��
	int i = 10;
	int& j = i;  //���ñ����ʼ�����ҳ�ʼ���󲻿ɸ���
	cout << j << endl;
	j = 11;
	cout << i << endl;
    

	//C++����������
	int x = 0;
	float y = 3.14;
	char z = 'a';
	string w = "adsdf";
	bool h = false;
	cout << "\n\n������x��ֵ" << endl;
	cin >> x;
	cout << x << endl;

	cout << "\n\n��������y��ֵ" << endl;
	cin >> y;
	cout << y << endl;

	cout << "\n\n���ַ���z��ֵ" << endl;
	cin >> z;
	cout << z << endl;

	cout << "\n\n���ַ�����w��ֵ" << endl;
	cin >> w;
	cout << w << endl;

	cout << "\n\n����������h��ֵ" << endl;
	cin >> h;
	cout << h << endl;	//ֻҪ�Ƿ�0ֵ��������

	system("pause");
}
