#include <iostream>
using namespace std;

int main()
{
    int classes;

    cout << "Enter number of classes: ";
    cin >> classes;

    int **marks = new int *[classes];
    int *students = new int[classes];

    for (int i = 0; i < classes; i++)
    {
        cout << "Students in class " << i + 1 << ": ";
        cin >> students[i];

        marks[i] = new int[students[i]];
    }

    cout << "\nEnter Marks:\n";

    for (int i = 0; i < classes; i++)
    {
        for (int j = 0; j < students[i]; j++)
        {
            cout << "Class " << i + 1
                 << " Student " << j + 1 << ": ";

            cin >> marks[i][j];
        }
    }

    cout << "\nClass Wise Marks:\n";

    for (int i = 0; i < classes; i++)
    {
        cout << "\nClass " << i + 1 << ": ";

        int sum = 0;

        for (int j = 0; j < students[i]; j++)
        {
            cout << marks[i][j] << " ";
            sum += marks[i][j];
        }

        double average = (double)sum / students[i];

        cout << "\nAverage = " << average << endl;
    }

    for (int i = 0; i < classes; i++)
    {
        delete[] marks[i];
    }

    delete[] marks;
    delete[] students;

    return 0;
}
