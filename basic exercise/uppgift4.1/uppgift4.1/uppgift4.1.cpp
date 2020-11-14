#include <iostream>
#include <climits>
using namespace std;

int main(int argc, const char* argv[])
{

	cout << "Skriv ett nummer, enter, ett nummer till OSV. Avsluta med att skriva in 0" << endl;
	cout << "" << endl;
	int max = INT_MIN;
	int nMax = INT_MIN;
	int min = INT_MAX;
	int sum = 0;
	int antal = 0;
	int inp = 0;


	cout << "Ange ett nummer" << endl;
	while (true) {
		cin >> inp;
		if (inp != 0) {
			break;
		}

		if (inp > max) {
			nMax = max;
			max = inp;
		}
		if (inp > nMax && inp < max) {
			nMax = inp;
		}

		if (inp < min) {
			min = inp;
		}

		if (sum += inp) {
			antal++;
		}
	}

	cout << "Summa: " << sum << endl;
	cout << "Medelvärdet: " << (double)sum / (double)antal << endl;
	cout << "Största talet: " << max << endl;
	cout << "Näst största tal: " << nMax << endl;
	cout << "Minsta talet: " << min << endl;

	("pause");
	return 0;

}
