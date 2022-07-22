// BiggestNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
int LargestNumber(int arrayData[]);
void DisplayLargest(int arrayData[]);
int main()
{
    int arrayData[] = { 1,4,6,8,9,10 };
    DisplayLargest(arrayData);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

int LargestNumber(int arrayData[])
{
    if (sizeof(arrayData) > 0) {
        int currentLargest = arrayData[0];
        for (int i = 0; i < sizeof(arrayData); i++)
        {
            if (currentLargest < arrayData[i]) {
                currentLargest = arrayData[i];
            }
        }
        return currentLargest;
    }
    return 0;
}

void DisplayLargest(int arrayData[])
{
    std::cout << LargestNumber(arrayData);
}