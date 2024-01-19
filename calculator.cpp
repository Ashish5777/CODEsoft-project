#include <iostream>
using namespace std;

int main()
{

    float num1, num2, result;
    char op;


    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;


    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':

        if (num2 == 0)
        {
            cout << "Error: division by zero.\n";
            return 0;
        }
        result = num1 / num2;
        break;
    default:

        cout << "Error: invalid operator.\n";
        return 0;
    }


    cout <<"your result is " << num1 << " " << op << " " << num2 << " = " << result << "\n";

    return 0;
}

