#include <iostream>
#include <string>
#include "h/helpHelper.h"
#include "h/msg.h"
#include "h/CheckAnswer.h"

using namespace std;

HelpMenu::HelpMenu()
{
    this->Show();
}

void HelpMenu::Show() {
    cout << "cd: Zmiana katalogu" << endl;
    cout << "pwd: Aktualna ścieżka" << endl;
    cout << "ls: Listowanie katalogu" << endl;
    cout << "addomain: Dodanie domeny apache" << endl;
    cout << "calc: Prosty kalkulator" << endl;
    cout << "rect: Rysowanie prostokata o zadanym rozmiarze" << endl;
    cout << "copy: kopiowanie plików" << endl;
    cout << "show: Wyswietlenie zawartosci pliku" << endl;
    cout << "mkdir: Tworzenie katalogu" << endl;
    cout << "exit: Wyjście z powłoki" << endl;
    cout << "h: Pomoc i manual" << endl;
}