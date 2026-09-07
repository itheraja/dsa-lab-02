#include <iostream>
using namespace std;

class SafeArray
{
private:
    int *arr;
    int size;

public:
    SafeArray(int s)
    {
        size = s;
        arr = new int[size];
    }

    void insert(int index, int value)
    {
        if (index >= 0 && index < size)
        {
            arr[index] = value;
        }
        else
        {
            cout << "Invalid Index!\n";
        }
    }

    void retrieve(int index)
    {
        if (index >= 0 && index < size)
        {
            cout << "Value = " << arr[index] << endl;
        }
        else
        {
            cout << "Invalid Index!\n";
        }
    }

    ~SafeArray()
    {
        delete[] arr;
    }
};

int main()
{
    int size;

    cout << "Enter array size: ";
    cin >> size;

    SafeArray obj(size);

    int index, value;

    cout << "\nInsert Values:\n";

    for (int i = 0; i < size; i++)
    {
        cout << "Index: ";
        cin >> index;

        cout << "Value: ";
        cin >> value;

        obj.insert(index, value);
    }

    cout << "\nRetrieve Values\n";

    while (true)
    {
        cout << "Enter index (-1 to stop): ";
        cin >> index;

        if (index == -1)
            break;

        obj.retrieve(index);
    }

    return 0;
}
