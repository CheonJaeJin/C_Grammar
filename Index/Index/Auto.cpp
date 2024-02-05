#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> odds()
{
	return { 1, 3, 5, 7, 9 };
}


int main()
{
	auto a1 = 10;			// int
	auto a2 = 3.14;			// float
	auto a3 = "hello";		// const char*
	auto a4 = "hello"s;		// string
	auto a5 = sqrt(2.0);	// double
	auto a6 = odds();		// vector<int>
	auto a7 = a6.begin();	// int
	auto lambda = [](int x) {	return x * 2; };	// int
}