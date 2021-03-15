class Solution {
public:
    bool isValid(string s) {
        stack<char> bracket;

        for (auto c : s) {
            if (c == '(' || c == '[' || c == '{')
                bracket.push(c);
            if (c == ')' || c == ']' || c == '}') {
                if (bracket.empty())
                    return false;
                else {
                    if (c - bracket.top() == 1)
                        bracket.pop();
                    else if (c - bracket.top() == 2)
                        bracket.pop();
                    else
                        return false;
                }
            }
        }
        if (bracket.empty())
            return true;
        return false;
        
    }
};
