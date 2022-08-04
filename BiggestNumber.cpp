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


int LargestNumber(int arrayData[])
{
    int size = sizeof(arrayData);
    if (size> 0) {
        int currentLargest = arrayData[0];
        for (int i = 0; i < size; i++)
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