class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> numbers;
        for (const string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int first = numbers.top(); numbers.pop();
                int second = numbers.top(); numbers.pop();

                if (token == "+") numbers.push(first + second);
                else if (token == "-") numbers.push(second - first);
                else if (token == "*") numbers.push(first* second);
                else if (token == "/") numbers.push(second / first);
            } else {
                numbers.push(stoi(token));
            }
        }
        return numbers.top();
    }
};
