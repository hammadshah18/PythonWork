// #include <iostream>
// #include <stack>
// #include <algorithm> // for reverse()
// using namespace std;

// int precedence(char op) {
//     if (op == '+' || op == '-') {
//         return 1;
//     }
//     if (op == '*' || op == '/') {
//         return 2;
//     }
//     if (op == '^') {
//         return 3;
//     }
//     return 0;
// }

// bool isOperator(char c) {
//     return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
// }

// string infixToPostfix(string infix) {
//     stack<char> s;
//     string postfix = "";
    
//     for (char c : infix) {
//         if (isalnum(c)) {
//             postfix += c;
//         }
//         else if (c == '(') {
//             s.push(c);
//         }
//         else if (c == ')') {
//             while (!s.empty() && s.top() != '(') {
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.pop();
//         }
//         else if (isOperator(c)) {
//             while (!s.empty() && precedence(s.top()) >= precedence(c)) {
//                 postfix += s.top();
//                 s.pop();
//             }
//             s.push(c);
//         }
//     }

//     while (!s.empty()) {
//         postfix += s.top();
//         s.pop();
//     }
    
//     return postfix;
// }

// string infixToPrefix(string infix) {
//     reverse(infix.begin(), infix.end());
    
//     for (int i = 0; i < infix.size(); i++) {
//         if (infix[i] == '(') {
//             infix[i] = ')';
//         } else if (infix[i] == ')') {
//             infix[i] = '(';
//         }
//     }

//     string postfix = infixToPostfix(infix);
    
//     reverse(postfix.begin(), postfix.end());
    
//     return postfix;
// }

// int main() {
//     cout<<"23CS036\n\n ";
//     string infix = "(A+B)*C-(D-E)*(F+G)";

//     string postfix = infixToPostfix(infix);
//     cout << "Postfix: " << postfix << endl;

//     string prefix = infixToPrefix(infix);
//     cout << "Prefix: " << prefix << endl;

//     return 0;
// }






// #include <iostream>
// #include <stack>
// #include <string>
// #include <sstream>
// using namespace std;

// int evaluatePostfix(const string& expression) {
//     stack<int> s;
//     stringstream ss(expression);
//     string token;

//     while (ss >> token) {
//         if (isdigit(token[0])) {
//             s.push(stoi(token));
//         } 
//         else {
//             int val2 = s.top(); s.pop();
//             int val1 = s.top(); s.pop();
//             if (token == "+") {
//                 s.push(val1 + val2);
//             } else if (token == "-") {
//                 s.push(val1 - val2);
//             } else if (token == "*") {
//                 s.push(val1 * val2);
//             } else if (token == "/") {
//                 s.push(val1 / val2);
//             }
//         }
//     }

//     return s.top();
// }

// int main() {
//      system("CLS");
//      cout<<"23CS036\n\n ";
//     string postfix = "4 3 2 + * 5 -";
//     cout << "The Reverse Polish Notation is: " << postfix << endl;
//     int result = evaluatePostfix(postfix);
//     cout << "The Result after Evaluation is: " << result << endl;
//     return 0;
// }





#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int evaluatePrefix(const string& expression) {
    stack<int> s;
    stringstream ss(expression);
    string token;
    string tokens[10];
    int i = 0;

    while (ss >> token) {
        tokens[i++] = token;
    }

    for (int j = i - 1; j >= 0; j--) {
        token = tokens[j];
        if (isdigit(token[0])) {
            s.push(stoi(token));
        } else {
            int val1 = s.top(); s.pop();
            int val2 = s.top(); s.pop();
            if (token == "+") {
                s.push(val1 + val2);
            } else if (token == "-") {
                s.push(val1 - val2);
            } else if (token == "*") {
                s.push(val1 * val2);
            } else if (token == "/") {
                s.push(val1 / val2);
            }
        }
    }

    return s.top();
}

int main() {
     system("CLS");
     cout<<"23CS036\n\n ";
    string prefix = "/ * + 5 6 3 11";
    cout << "The Polish Notation is: " << prefix << endl;
    int result = evaluatePrefix(prefix);
    cout << "The Result after Evaluation is: " << result << endl;
    return 0;
}
