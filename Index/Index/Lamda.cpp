#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Person
{
	string name;
	int age;
};

int main()
{
	// double�� �־ double�� ������ �Լ� ������ fp
	// [] ĸ�İ� ������ ��밡��
	double(*fp)(double) = [](double a) { return a * a; };

	//	�Լ� ������	=	ĸ��	, �Լ��� ���ǿ� �����
	//  ���� �Լ�
	//	1ȸ�� �Լ�, �ѹ� ���� �� �ٷ� �Ұ� ��
	auto square = [](double a) { return a * a; };
	cout << "square(1.414) = " << square(1.414) << endl;

	vector<Person> students;
	students.push_back({ "Kim", 20 });
	students.push_back({ "Lee", 30 });
	students.push_back({ "Park", 24 });
	students.push_back({ "Choi", 40 });

	//	���� �Լ� sort
	//	�̸��� �������� abc ������ ���ĉ�
	//  ������ ���� (������������),(������������) ����
	sort(
		students.begin(), 
		students.end(), 
		[](const Person& p1, const Person& p2){return p1.name < p2.name; }
	);

	for (const auto& p : students)
	{
		cout << p.name << " : " << p.age << endl;
	}
}
