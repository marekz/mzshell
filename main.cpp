#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "h/msg.h"
#include "h/helpHelper.h"
#include "h/CheckAnswer.h"
#include "h/ClearScreen.h"

int main() {

    string exitStatus;
    const int ArSize = 40;
    char q[ArSize];

    msg("Jesli potrzebujesz podpowiedzi, wcisnij \"h\"");
    msg("Jesli wszystko jasne, wprowadź komendę lub wyjdź z programu poleceniem \"exit\"");
    exitStatus = "N";
    
    while (exitStatus != "exit") {

        cout << ">>>";

        cin.get(q, ArSize).get();
        
        exitStatus = q;

        CheckAnswer newAnswer = CheckAnswer(q);
    }

    ClearScreen newClear;

    return 0;
}