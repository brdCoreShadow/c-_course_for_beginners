#include <iostream>

using namespace std;

void multiplication_table()
{

    int user_number;
    int max_multiplier;
    cout << "Choose the number: " << endl;
    cin >> user_number;
    cout << "Choose the max_multiplier not including: " << endl;
    cin >> max_multiplier;

    for (int i = 1; i < max_multiplier; i++)
    {
        int result = i * user_number;

        cout << user_number << " * " << i << " = " << result << endl;
    }
}