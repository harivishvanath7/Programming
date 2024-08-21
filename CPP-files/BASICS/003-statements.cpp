#include <iostream>
using namespace std;

int main() {
    // Declaration statements
    int num1, num2;
    int result = 0;

    // Input
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Selection statements (conditionals)
    if (num2 != 0) {
        result = num1 / num2;
        cout << "Division result: " << result << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    // Iteration statements (loop)
    for (int i = 0; i < result; ++i) {
        cout << "Iteration " << i + 1 << endl;
    }

    // Expression statements
    result *= 2;

    // Jump statement
    if (result > 5) {
        goto label;
    }
    cout << "This won't be printed." << endl;

    // Compound statement (block)
    {
        int innerVar = result + 10;
        cout << "Inner variable: " << innerVar << endl;
    }

    // Try block
    try {
        if (result < 10) {
            throw runtime_error("Result too small.");
        }
        cout << "After try block." << endl;
    } catch (const exception &e) {
        cerr << "Exception caught: " << e.what() << endl;
    }

label:
    cout << "After the jump." << endl;

    return 0;
}
