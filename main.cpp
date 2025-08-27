#include <iostream>
#include <fstream>
#include <string>
// #include "guess_number.h"
// #include "calculator.h"
// #include "multiplication_table.h"

using namespace std;

enum Actions
{
    read,
    write,
    execute,
    del
};

struct File
{
    string name;
    float weight;
    Actions actions;

};
// struct Car
// {
//     string model;
//     string marka;
//     int age;
//     float mileage;

//     struct Point
//     {
//         float x, y;
//     };

//     Point location;

//     void get_info()
//     {
//         cout << model << marka << age << mileage << endl;
//         cout << location.x << location.y << endl;
//     }
// };

int
main()
{

    // enum

File my_file;
my_file.name = "vsevolodych.txt";
my_file.weight = 7.8f;
my_file.actions = Actions::execute;

cout << my_file.actions << endl;


    // structures

    // Car my_car;
    // my_car.model = "audi";
    // my_car.marka = "q5";
    // my_car.age = 15;
    // my_car.mileage = 240.5f;
    // my_car.location.x = 54.5f;
    // my_car.location.y = 46.7f;

    // my_car.get_info();

    // files

    // ofstream file("test.txt", ios_base::out);

    // if (file.is_open())
    // {
    //     file << "Hello Vsevolodych";

    //     file.close();
    // }

    // ifstream file("test.txt");

    // if (file.is_open())
    // {
    //     string text;

    //     getline(file, text);

    //     cout << text << endl;
    // }

    return 0;
}