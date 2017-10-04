#include <string>
#include <iostream>
#include <vector>
#include <sstream>

#include "h/CheckAnswer.h"
#include "h/helpHelper.h"
#include "h/ChangeDirect.h"
#include "h/ListDir.h"
#include "h/AddDomain.h"
#include "h/Calc.h"
#include "h/SchowPwd.h"
#include "h/Rectangle.h"
#include "h/Copy.h"
#include "h/PrintFile.h"
#include "h/CreateDir.h"

using namespace std;

CheckAnswer::CheckAnswer(const string answ) {
    this->command = answ;
    
    istringstream iss(this->command);
    string word;
    string arguments[40];
    int licznik = 0;
    
    while (iss >> word) {
        arguments[licznik] = word;
        licznik ++;
    }
    
    this->choice = arguments[0];
    this->order = arguments[1];
    this->param1 = arguments[1];
    this->param2 = arguments[2];
    this->param3 = arguments[3];
    
    this->executeCommand();
}

void CheckAnswer::executeCommand() {
    
    if (choice == "cd") {
        ChangeDirect newCd = ChangeDirect(order);
    } else if (choice == "pwd") {
        SchowPwd newSchowPwd = SchowPwd();
    } else if (choice == "ls") {
        ListDir newListDir;
    } else if (choice == "addomain") {
        AddDomain newAddDomain = AddDomain(order);
    } else if (choice == "calc") {
        Calc newCalc = Calc(this->param1, this->param2, this->param3);
    } else if (choice == "rect") {
        Rectangle newRect = Rectangle(this->param1, this->param2);
    } else if (choice == "copy") {
        Copy newCopy = Copy(this->param1, this->param2);
    } else if (choice == "show") {
        PrintFile newPrintFile = PrintFile(this->param1);
    } else if (choice == "mkdir") {
        CreateDir newCreateDir = CreateDir(this->param1);
    } else if (choice == "h" || choice == "help") {
        HelpMenu newHelp = HelpMenu();
    } else
        cout << "Błędne polecenie. Sprubuj raz jeszcze lub wywołaj helpa poleceniem h.\n";
}
