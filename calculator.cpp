#include <iostream>
#include <cmath>

using namespace std;

void calculator()
{

    float num1, num2;

    char math_operator;

    cout << "enter the first number: " << endl;
    cin >> num1;
    cout << "enter the second number: " << endl;
    cin >> num2;
    cout << "enter the math operator: " << endl;
    cin >> math_operator;

    switch (math_operator)
    {
    case '+':
        cout << "Result: " << (num1 + num2) << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "You can't devide on zero!" << endl;
        }
        else
        {
            cout << "Result: " << num1 / num2 << endl;
        }
        break;
    case '%':
        cout << "Result: " << fmod(num1, num2) << endl;
        break;
    default:
        cout << "Invalid operator!" << endl;
        break;
    }
}