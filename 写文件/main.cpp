#include<iostream>
#include<fstream>
using namespace std;

void test01()
{
	ofstream ofs;
	ofs.open("�����ƶ�.txt", ios::out);

	ofs << "���170cm" << endl;
	ofs << "����74kg" << endl;
	ofs << "24�꣬��ѧ��" << endl;

	ofs.close();

}

int main()
{

	test01();

	test01();

	return 1;
}