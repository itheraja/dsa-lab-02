#include <iostream>
using namespace std;

int main()
{
    int students, subjects;

    cout << "Enter number of students: ";
    cin >> students;

    cout << "Enter number of subjects: ";
    cin >> subjects;

    int **marks = new int *[students];

    for (int i = 0; i < students; i++)
    {
        marks[i] = new int[subjects];
    }

    cout << "\nEnter marks:\n";

    for (int i = 0; i < students; i++)
    {
        for (int j = 0; j < subjects; j++)
        {
            cout << "Student " << i + 1 << ", Subject " << j + 1 << ": ";
            cin >> marks[i][j];
        }
    }

    int newStudents, newSubjects;

    cout << "\nEnter new number of students: ";
    cin >> newStudents;

    cout << "Enter new number of subjects: ";
    cin >> newSubjects;

    int **newMarks = new int *[newStudents];

    for (int i = 0; i < newStudents; i++)
    {
        newMarks[i] = new int[newSubjects];
    }

    for (int i = 0; i < newStudents; i++)
    {
        for (int j = 0; j < newSubjects; j++)
        {
            if (i < students && j < subjects)
            {
                newMarks[i][j] = marks[i][j];
            }
            else
            {
                cout << "Enter mark for Student "
                     << i + 1 << ", Subject "
                     << j + 1 << ": ";

                cin >> newMarks[i][j];
            }
        }
    }

    for (int i = 0; i < students; i++)
        delete[] marks[i];

    delete[] marks;

    marks = newMarks;

    cout << "\nUpdated Marks Table:\n";

    for (int i = 0; i < newStudents; i++)
    {
        for (int j = 0; j < newSubjects; j++)
        {
            cout << marks[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < newStudents; i++)
        delete[] marks[i];

    delete[] marks;

    return 0;
}
