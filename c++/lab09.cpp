//  #include <iostream>
// #include <stack>
// #include <string>
// using namespace std;

// void pushName(stack<char> &s, const string &name)
// {
//     for (char c : name)
//     {
//         s.push(c);
//     }
// }

// void popAndDisplay(stack<char> &s)
// {
//     cout << "Popping and displaying characters from stack: " << endl;
//     while (!s.empty())
//     {
//         cout << s.top();
//         s.pop();
//     }
//     cout << endl;
// }

// int main()
// {
//     system("CLS");
//     cout<<"23CS036\n";
// //     stack<char> s;
// //     string name = "hammad";

// //     pushName(s, name);

// //     popAndDisplay(s);

// // //     return 0;
// // // }


// #include <iostream>
// using namespace std;
// #define N 6

// struct Stack {
//     int arr[N];
//     int top = 0;  
// };
// void PUSH(Stack& s, int item) {
//     if (s.top < N) {
//         s.arr[s.top] = item;  
//         s.top++;
//     } else {
//         cout << "Stack Overflow! Cannot push " << item << endl;
//     }
// }
// void POP(Stack& s, int& item) {
//     if (s.top > 0) {
//         s.top--;  
//         item = s.arr[s.top];  
//     } else {
//         cout << "Stack Underflow! Cannot pop." << endl;
//     }
// }

// int main() {
//     cout<<"23cs036"<<endl;
//     Stack s; 
//     int A = 3, B = 1;  

   
//     PUSH(s, A);          
//     PUSH(s, 5);      
//     PUSH(s, B + 3);    
//     PUSH(s, 8);      
//     PUSH(s, A + B);     

//     int item;
//     cout << "Popping and displaying items from the stack:" << endl;
//     while (s.top != 0) {
//         POP(s, item);  
//         cout << item << endl; 
//     }

//     return 0; 
// }


#include <iostream>
using namespace std;
#define N 6

struct Stack {
    char arr[N];
    int top;
};


void initializeStack(Stack &s) {
    s.top = 5; 
    s.arr[0] = 'A';
    s.arr[1] = 'C';
    s.arr[2] = 'D';
    s.arr[3] = 'F';
    s.arr[4] = 'K';
}


void PUSH(Stack &s, char item) {
    if (s.top < N) {
        s.arr[s.top] = item;
        s.top++;
    } else {
        cout << "Stack Overflow! Cannot push " << item << endl;
    }
}


void POP(Stack &s, char &item) {
    if (s.top > 0) {
        s.top--;
        item = s.arr[s.top];
    } else {
        cout << "Stack Underflow! Cannot pop." << endl;
    }
}


void displayStack(const Stack &s) {
    cout << "Stack: ";
    for (int i = 0; i < s.top; i++) {
        cout << s.arr[i] << " ";
    }
    for (int i = s.top; i < N; i++) {
        cout << "_ "; 
    }
    cout << endl;
}

int main() {
    cout<<"23CS036 \n\n";
    Stack s;
    initializeStack(s); 
   
    displayStack(s);

    char item;

    POP(s, item);
    cout << "After POP, popped item: " << item << endl;
    displayStack(s);

    POP(s, item);
    cout << "After POP, popped item: " << item << endl;
    displayStack(s);

    PUSH(s, 'L');
    cout << "After PUSH L:" << endl;
    displayStack(s);

    PUSH(s, 'P');
    cout << "After PUSH P:" << endl;
    displayStack(s);

    POP(s, item);
    cout << "After POP, popped item: " << item << endl;
    displayStack(s);

    PUSH(s, 'R');
    cout << "After PUSH R:" << endl;
    displayStack(s);

    PUSH(s, 'S');
    cout << "After PUSH S:" << endl;
    displayStack(s);

    POP(s, item);
    cout << "After POP, popped item: " << item << endl;
    displayStack(s);

    return 0;
}