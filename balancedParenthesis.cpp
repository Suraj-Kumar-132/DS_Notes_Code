#include <bits/stdc++.h>
using namespace std;
bool isValid(string str)
{
    int n = str.size();

    stack<char> st;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '{' or str[i] == '[' or str[i] == '(')
            st.push(str[i]);

        else if (str[i] == ')')
        {

            if (!st.empty() and st.top() == '(')
                st.pop();
            else
            {

                return false;
                break;
            }
        }
        else if (str[i] == '{')
        {

            if (!st.empty() and st.top() == '}')
                st.pop();
            else
            {

                return false;
                break;
            }
        }
        else if (str[i] == '[')
        {

            if (!st.empty() and st.top() == ']')
                st.pop();
            else
            {

                return false;
                break;
            }
        }
    }
    if (!st.empty())
        return false;

    return ans;
}

int main()
{
    string str;
    cin >> str;
    if (isValid(str))
    {
        cout << "Valid string " << endl;
    }
    else
        cout << "Invalid String " << endl;

    return 0;
}