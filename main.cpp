#include <iostream>
#include <string>

using namespace std;

int main() {
    // تنسيق الواجهة بشكل أجمل
    cout << "==================================\n";
    cout << "   Logical & Arithmetic Engine    \n";
    cout << "==================================\n";
    cout << "1. Arithmetic (+, -, *, /)\n";
    cout << "2. Logical (AND, OR)\n";
    cout << "3. Logical (NOT)\n";
    cout << "Enter your choice (1-3): ";
    
    int choice;
    cin >> choice;

    switch (choice) {
        case 1: { // العمليات الحسابية
            double a, b;
            char op;
            cout << "Format: [Number] [Operator] [Number] (e.g., 10 / 2)\n";
            cout << "Enter expression: ";
            cin >> a >> op >> b;

            if (op == '+') cout << "Result: " << a + b << endl;
            else if (op == '-') cout << "Result: " << a - b << endl;
            else if (op == '*') cout << "Result: " << a * b << endl;
            else if (op == '/') {
                if (b != 0) cout << "Result: " << a / b << endl;
                else cout << "Error: Cannot divide by zero!\n";
            } else cout << "Invalid operator!\n";
            break;
        }

        case 2: { // العمليات المنطقية الثنائية
            bool x, y;
            string op;
            cout << "Format: [0/1] [AND/OR] [0/1] (e.g., 1 AND 0)\n";
            cout << "Enter operation: ";
            cin >> x >> op >> y;

            if (op == "AND" || op == "and") cout << "Result: " << (x && y) << endl;
            else if (op == "OR" || op == "or") cout << "Result: " << (x || y) << endl;
            else cout << "Invalid logical operator!\n";
            break;
        }

        case 3: { // عملية النفي
            bool x;
            cout << "Enter value (0 or 1): ";
            cin >> x;
            cout << "Result of NOT " << x << " is: " << !x << endl;
            break;
        }

        default:
            cout << "Invalid selection! Please run again and choose 1, 2, or 3.\n";
    }

    return 0;
}