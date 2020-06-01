#include <iostream>
using namespace std;

int main()
{
	int hours, minutes, seconds;

	cout << "Ange sekunder: "; 
	cin >> seconds;

	hours = seconds / 3600;
	minutes = (seconds % 3600) / 60;
	seconds = seconds % 60;

	cout << " " << endl;

	cout << "Det blir " << endl
		<< "timmar: " << hours << endl
		<< "minuter: " << minutes << endl
		<< "sekunder: " << seconds << endl;

	system("PAUSE");
	return 0;
}