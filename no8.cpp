#include <iostream>

using namespace std;

int main()
{
    int price;

    cin >> price;
    int change = 1000 - price;

    cout << "จำนวนเงินทอน " << change << " บาท" << endl;

    if (change >= 500)
    {
        cout << "500 " << change / 500 << " ใบ" << endl;
        change = change % 500;
    }

    if (change >= 100)
    {
        cout << "100 " << change / 100 << " ใบ" << endl;
        change = change % 100;
    }

    if (change >= 50)
    {
        cout << "50 " << change / 50 << " ใบ" << endl;
        change = change % 50;
    }

    if (change >= 20)
    {
        cout << "20 " << change / 20 << " ใบ" << endl;
        change = change % 20;
    }

    if (change >= 10)
    {
        cout << "10 " << change / 10 << " เหรียญ" << endl;
        change = change % 10;
    }

    if (change >= 5)
    {
        cout << "5 " << change / 5 << " เหรียญ" << endl;
        change = change % 5;
    }

    if (change >= 1)
    {
        cout << "1 " << change / 1 << " เหรียญ";
    }
    return 0;
}