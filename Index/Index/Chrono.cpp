#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <chrono>

using namespace std;

int main()
{
	auto start = chrono::system_clock::now();

	// Do something!!

	auto end = chrono::system_clock::now();

	// �и������� ������ ��ȯ �ڵ�
	auto msec = chrono::duration<double>(end - start).count() * 1000;
	cout << " time" << msec << "ms." << endl;

}