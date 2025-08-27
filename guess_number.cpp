#include <iostream>

using namespace std;
void guess_number()
{
    srand(time(NULL));

    bool isMatch = false;
    int secret_number = 1 + rand() % 10;
    int user_number;
    cout << "guess the number: " << endl;
    do
    {

        cin >> user_number;

        if (user_number < secret_number)
        {
            cout << "Too low.." << endl;
        }
        else if (user_number > secret_number)
        {
            cout << "Too high..." << endl;
        }
        else
        {
            cout << "You guess it! My congrats!" << endl;
        }

    } while (!isMatch);
}