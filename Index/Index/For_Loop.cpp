#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<int> numbers{ 10, 20, 30 };
	// 1
	//	�����̳� �ȿ� ���Ҹ� ����	���� �̸��� ������ Ÿ��	:	�����̳� Ȥ�� �迭�� �̸�
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

	// n �� �������·� �޾ƿ�
	// ���� ���¶� ���� for ���ȿ��� ����Ǹ� ���Ϳ� �� �ִ� ��Ұ� �ٲ�
	for (auto& n : numbers)
	{
		cout << n << endl;
	}

	string strs[] = { "I", "love", "you" };

	// �������·� �о���鼭 ������ �ǻ簡 ������ ��Ÿ���� const
	for (const auto& s : strs)
	{
		cout << s << " ";
	}

}