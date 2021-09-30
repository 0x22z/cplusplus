#include <iostream>

using namespace std;

int cool()
{
    string color, plural, person;

    cout <<  "enter a color: ";
    getline(cin, color);
    cout << "enter a plural: ";
    getline(cin, plural);
    cout << "enter a person: ";
    getline(cin, person);


    cout << "Roses are " << color << endl;
    cout << plural << " are blue" << endl;
    cout << "I love "<< person << endl;




}
