// 10828 스택
// stl 써서 품.
// 근데 직접 push, top, pop 만들어서 풀어야하는
// 경우도 있을 수 있으니 인지해놓자.

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    stack<int> s;

    while (n--)
    {
        string str;
        cin >> str;

        if (str == "push")
        {
            int num;
            cin >> num;
            s.push(num);
        }
        else if (str == "pop")
        {
            if(s.empty()) 
                cout << -1 << '\n';
            else{
                cout << s.top() <<'\n';
                s.pop();
            }
        }
        else if (str == "size")
        {
            cout << s.size() << '\n';
        }
        else if (str == "empty")
        {
            cout << s.empty() << '\n';
        }
        else if (str == "top")
        {
            if (s.empty())
                cout << -1 << '\n';
            else
                cout << s.top() << '\n';
        }
    }

    return 0;
}