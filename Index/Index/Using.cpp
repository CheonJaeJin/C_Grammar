#include <iostream>
#include <vector>

using namespace std;

// 1
using unchar = unsigned char;
// 2
template <typename T>
using matrix1d = vector<T>;
// 3
using da10 = double[10];
// 4			int �����͸� ���ڷ� �ϳ� �ް�, void �� ���� �ϴ� �Լ�
using func = void (*)(int);

void my_function(int n)
{
	cout << "my_function() is called!" << endl;
}

int mian()
{
	// 2
	matrix1d<float> vec(3);
	// 3
	da10 arr{};
	// 4
	func fp = &my_function;

	return 0;
}