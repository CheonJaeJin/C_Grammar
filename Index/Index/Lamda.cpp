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
	// double을 넣어서 double이 나오는 함수 포인터 fp
	// [] 캡쳐가 없을때 사용가능
	double(*fp)(double) = [](double a) { return a * a; };

	//	함수 포인터	=	캡쳐	, 함수의 정의와 비슷함
	//  람다 함수
	//	1회용 함수, 한번 실행 후 바로 소거 됨
	auto square = [](double a) { return a * a; };
	cout << "square(1.414) = " << square(1.414) << endl;

	vector<Person> students;
	students.push_back({ "Kim", 20 });
	students.push_back({ "Lee", 30 });
	students.push_back({ "Park", 24 });
	students.push_back({ "Choi", 40 });

	//	정렬 함수 sort
	//	이름을 기준으로 abc 순서로 정렬됌
	//  마지막 인자 (오름차순으로),(내림차순으로) 결정
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
