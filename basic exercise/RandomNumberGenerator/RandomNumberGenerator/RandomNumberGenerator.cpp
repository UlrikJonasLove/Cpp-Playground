#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
    srand(time(0));
    int randNum = rand() % 36 + 1;
    // std::cout << randNum << std::endl;

    if (randNum % 2 == 0)
    {
        system("color F0");
        cout << randNum;
    }

    else
    {
        system("Color 0C");
        cout << randNum;
    }
    return 0; 
}
