#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Sname;
    int Grupo = 0;

    cout << "Please input your initial of Second Name" << endl;
    cin >> Sname;

      char initial = toupper(Sname[0]);
   

   if (initial >= 'A' && initial <= 'M') {
        Grupo = 1;
    }

    else if (initial >= 'N' && initial <= 'Z') {
        Grupo = 2;
    } 

    else
    {

        cout << "Please input a valid letter or use upper case letters";
    }


    switch (Grupo)
    {
    case 1:
        cout << "You are in First group";
        break;

    case 2:
        cout << "You are in Second group";

    default:
        "Please digit A-Z letters";
        break;
    }
}