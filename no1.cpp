#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int sum;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cin >> sum;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << arr[i] << "," << arr[j] << endl;
            }
        }
    }

    return 0;
}
