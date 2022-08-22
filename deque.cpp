#include <bits/stdc++.h>

using namespace std;

/*
Deque
Double ended queue
1: Push and Pop from the end;
2: Insert and delete from the start;
3: Header File <deque>
*/

int main()
{
    deque<int> dq;
    dq.push_back(1);

    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;
    dq.pop_back();
    dq.pop_front();

    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << dq.size();
    return 0;
}