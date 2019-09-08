#include <iostream>
#include <math.h>

using namespace std;

int main() {
	double f, result;
	cin >> f;
	cout << fixed; // 뒤의 소수점 자리 고정
	cout.precision(2); // 2개, 출력할 때 자동으로 반올림 됨
	cout << f << endl;
	return 0;
}
