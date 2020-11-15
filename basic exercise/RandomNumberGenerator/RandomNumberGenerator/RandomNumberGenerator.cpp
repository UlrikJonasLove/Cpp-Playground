#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main()
{
    srand(time(0));

    int randNum = rand() % 36 + 1;
    int playerSum = 1000; 
    int numInput;

    string yourCoice;
    string textInput;

    cout << "Welcome to the roulette game!\nYour coice - Number or color:  ";

    cin >> numInput;
    cin >> textInput;

    if (textInput == "number" || "Number" || "Color" || "color") 
    {
        cout << "This is some text ";
    }

    if (randNum % 2 == 0)
    {
        system("color F0");
        cout << randNum;

        if (numInput % 2 == 0 || textInput == "blue")
        {

        }
    }

    else
    {
        system("Color 0C");
        cout << randNum;
    }
    return 0; 
}
