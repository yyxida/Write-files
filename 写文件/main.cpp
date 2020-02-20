#include<iostream>
#include<fstream>
using namespace std;

void test01()
{
	ofstream ofs;
	ofs.open("田所浩二.txt", ios::out);

	ofs << "身高170cm" << endl;
	ofs << "体重74kg" << endl;
	ofs << "24岁，是学生" << endl;

	ofs.close();

}

int main()
{

	test01();

	test01();

	return 1;
}