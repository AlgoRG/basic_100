#include <iostream>

using namespace std;

int main() {
	int a[23] = 0;
	int count, input;
	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> input;
		a[input - 1]++;
	}

	for (int i = 0; i < a.length(); i++) {
		cout << a[i];
	}
}