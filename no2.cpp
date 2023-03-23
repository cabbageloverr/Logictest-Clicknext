#include <iostream>

using namespace std;

int main()
{
    string s1;
    string s2;

    cin >> s1 >> s2;

    if (s1.length() != s2.length())
    {
        cout << "False" << endl;
        return 0;
    }

    int index;

    for (int i = 0; i < s1.length(); i++)
    {
        for (int j = 0; j < s2.length(); j++)
        {
            index = j;
            if (s1[i] == s2[j])
            {
                s2[j] = ' ';
                break;
            }

            if (s1[i] + 32 == s2[j])
            {
                s2[j] = ' ';
                break;
            }

            if (s1[i] - 32 == s2[j])
            {
                s2[j] = ' ';
                break;
            }
        }

        if (s2[index] != ' ')
        {
            cout << "False" << endl;
            return 0;
        }
    }

    cout << "True" << endl;
    return 0;
}