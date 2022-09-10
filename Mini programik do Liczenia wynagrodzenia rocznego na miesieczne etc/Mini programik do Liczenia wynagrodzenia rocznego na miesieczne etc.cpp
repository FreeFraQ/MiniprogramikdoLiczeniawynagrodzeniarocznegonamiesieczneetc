// Mini programik do Liczenia wynagrodzenia rocznego na miesieczne etc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float Rocznewynagrodzenie;
    cout << " Prosze wpisac swoje roczne wynagrodzenie ";
    cin >> Rocznewynagrodzenie;
    float Miesiecznewynagrodzenie = Rocznewynagrodzenie / 12;

    cout << " Twoje miesieczne wynagrodzenie wynosi " << Miesiecznewynagrodzenie << endl;

    cout << " A za 10 lat bedzie wynosic " << Rocznewynagrodzenie * 10;
    system("pause>0");

}


