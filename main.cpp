#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int calculate(string s)
    {
        stack<string> operations;
        string num = "";
        for (char c: s)
        {
            if (c == ' ') continue;

            if (isdigit(c))
            {
                num += c;
            }
            else
            {
                if (!num.empty())
                {
                    operations.push(num);
                    num = "";
                }
                operations.push(string(1, c));
            }
            
        }
        if (!num.empty())
        {
            operations.push(num);
            num = "";
        }
        return 0;
    }
    static bool isNumeric(const string &str)
    {
        std::string::const_iterator it = str.begin();
        while (it != str.end() && std::isdigit(*it))
            ++it;
        return !str.empty() && it == str.end();
    }
};

int main()
{
    Solution s;
    s.calculate("(1+(4+5+2)-3)+(6+8)");
    return 0;
}