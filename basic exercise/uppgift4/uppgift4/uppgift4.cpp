#include <iostream>

using namespace std;
int main(int argc, const char * argv[])
{
    int max = INT_MIN;
    int nMax = INT_MIN;
    int min = INT_MAX;
    int sum = 0;
    int antal = 0;
    int inp = 0;

    while (true) {
        cout << "Skriv in tal" << endl;
        cin >> inp;

        if (inp == 0) {
            break;
        }

        if (inp > max) {
            nMax=max;
            max = inp;
        }
        if (inp > nMax && inp < max) {
            nMax = inp;
        }

        if (inp < min) {
            min = inp;
        }
        inp += sum;
        antal++;
    }

    cout << "Summa: " << sum << endl;
    cout << "Medelvärde: " << (double)sum/(double)antal << endl;
    cout << "Störst tal: " << max << endl;
    cout << "Näst störst tal: " << nMax << endl;
    cout << "Minst tal: " << min << endl;

    ("pause");
    return 0;
}