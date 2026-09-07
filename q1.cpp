#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int marks[SIZE];
    int sum = 0;

    cout << "Enter marks of 10 students:\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
        sum += marks[i];
    }

    cout << "\nMarks:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << marks[i] << " ";
    }

    double average = (double)sum / SIZE;

    int aboveAverage = 0;
    int highest = marks[0];
    int lowest = marks[0];

    for (int i = 0; i < SIZE; i++)
    {
        if (marks[i] > average)
            aboveAverage++;

        if (marks[i] > highest)
            highest = marks[i];

        if (marks[i] < lowest)
            lowest = marks[i];
    }

    cout << "\n\nAverage = " << average;
    cout << "\nStudents Above Average = " << aboveAverage;
    cout << "\nHighest Marks = " << highest;
    cout << "\nLowest Marks = " << lowest;

    return 0;
}
