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

	// 밀리세컨드 단위로 변환 코드
	auto msec = chrono::duration<double>(end - start).count() * 1000;
	cout << " time" << msec << "ms." << endl;

}