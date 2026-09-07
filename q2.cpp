#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter initial number of products: ";
    cin >> n;

    double *prices = new double[n];

    cout << "Enter prices:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    int newSize;

    cout << "Enter new number of products: ";
    cin >> newSize;

    double *newPrices = new double[newSize];

    int limit;

    if (n < newSize)
        limit = n;
    else
        limit = newSize;

    for (int i = 0; i < limit; i++)
    {
        newPrices[i] = prices[i];
    }

    if (newSize > n)
    {
        cout << "Enter prices of new products:\n";

        for (int i = n; i < newSize; i++)
        {
            cin >> newPrices[i];
        }
    }

    delete[] prices;

    prices = newPrices;

    cout << "\nAll Prices:\n";

    for (int i = 0; i < newSize; i++)
    {
        cout << prices[i] << " ";
    }

    delete[] prices;

    return 0;
}
