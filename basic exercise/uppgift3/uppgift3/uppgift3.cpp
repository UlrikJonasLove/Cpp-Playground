#include <iostream>

using namespace std;

int main() {
	int input;
	cout << "Ange antal rader(0 för avsluta)";
	while (cin >> input) {
		if (input == 0) {
			break;
		}
		for (int i = 1; i <= input;i++) {
			for (int j = 0;j < i;j++) {
				cout << '*';
			}
			cout << endl;
		}
		cout << endl;

	}

	return 0;
}