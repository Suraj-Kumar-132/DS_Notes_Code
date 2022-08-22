#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int hash[128] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch != ' ')
        {
            hash[(int)str[i]]++;
        }
    }
    for (int i = 0; i < 127; i++)
    {
        if (hash[i] > 1)
        {
            char ch = (char)i;
            cout << ch << " ";
        }
    }
    return 0;
}