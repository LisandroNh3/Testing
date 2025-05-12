#include <iostream>
using namespace std;

int main (){

    int day;

    cout << "ingress your day for give your class of the day in 1- Monday, 2- Thrusday, 3- Wendsday, 4-Tuesday, 5-Friday, 6-Sunday"  << endl;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "This day u have Matematica discreta and Fundamentos de programacion";
        break;

        case 2:
        cout << "This day u have Precalculo and Elementos de la cienca y la tecnologia";
        break;

        case 3:
        cout << "This day u have the second class of Matematica discreta and Fundamentos de programacion";
        break;

        case 4:
        cout << "This day u have the second class of Precalculo and Elementos de la ciencia y la tecnologia";
        break;

        case 5:
        cout << "This day u have Discusiones of Precalculo and Matematica discreta";
        break;

        case 6:
        cout << "Dont worry, u dont have any evaluation this day :D";
        break;

    
    
    default: cout <<"Please input a valid day";
        break;
    }

}