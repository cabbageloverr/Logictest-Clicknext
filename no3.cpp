#include <iostream>

using namespace std;

int main()
{
    int n;
    int index = 0;

    cout << "Enter number of brodcast date: ";
    cin >> n;

    int date[n];

    cout << "Enter TV brodcast date: ";

    for (int i = 0; i < n; i++)
    {
        cin >> date[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(date[i] != date[i-1]+1  && date[i+1] != date[i]+1){
            cout << date[i];
            if(i != n-1){
                cout << ", ";
            }
        }

        else if(date[i+1] == date[i]+1){
            index++;
        }

        else if(date[i] == date[i-1]+1 && date[i+1] != date[i]+1){
            cout << date[i-index] << "-" << date[i];
            index = 0;
            if(i != n-1){
                cout << ", ";
            }
        }
    }
    return 0;
}