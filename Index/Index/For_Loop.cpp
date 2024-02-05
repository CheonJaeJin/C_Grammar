#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> numbers{ 10, 20, 30 };
	// 1
	//	컨테이너 안에 원소를 받을	변수 이름과 데이터 타입	:	컨테이너 혹은 배열의 이름
	for (int n : numbers)
	{
		cout << n << endl;
	}

	// 2
	for (auto iter = begin(numbers); iter < end(numbers); ++iter)
	{
		cout << *iter << endl;
	}

	// 3

	// n 이 참조형태로 받아옴
	// 참조 형태라 값이 for 문안에서 변경되면 벡터에 들어가 있는 요소가 바뀜
	for (auto& n : numbers)
	{
		cout << n << endl;
	}

	string strs[] = { "I", "love", "you" };

	// 참조형태로 읽어오면서 변경할 의사가 없음을 나타내는 const
	for (const auto& s : strs)
	{
		cout << s << " ";
	}

}