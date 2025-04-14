#include <iostream>
using namespace std;

int main()
{
	// Task 1
	int N;
	cout << "Enter height: ";
	cin >> N;

    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N - y - 1; x++)
        {
            cout << " ";
        }
        for (int x = 0; x < y * 2 + 1; x++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";

    // Task 2
    int size = 13;

    // figure 1
    for (int y = 0; y < size; y++)
    {
        for (int x = 0; x < size; x++)
        {
            if (x == size / 2 - y || 
                x == size / 2 + y || 
                x == size - 1 - y + size / 2 || 
                x == size / 2 - (size - 1 - y))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    cout << "\n";

    // figure 2
    for (int y = 0; y < size; y++)
    {
        for (int x = 0; x < size; x++)
        {
            if (x == y ||
                x <= size / 2 && y == 0 ||
                x >= size / 2 && y == size - 1 ||
                x == 0 && y <= size / 2 ||
                x == size - 1 && y >= size / 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    cout << "\n";

    // figure 3
    for (int y = 0; y < size; y++)
    {
        for (int x = 0; x < size; x++)
        {
            if ((x > 0 && x < size / 2 && y == 0) ||
                (x == 0 && y > 0 && y < size / 2) ||
                (x == size / 2 && y > 0 && y < size / 2) ||
                (x > 0 && x < size / 2 && y == size / 2) ||
                (x > size / 2 && x < size - 1 && y == size / 2) ||
                (x == size / 2 && y > size / 2 && y < size - 1) ||
                (x == size - 1 && y > size / 2 && y < size - 1) ||
                (x > size / 2 && x < size - 1 && y == size - 1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}