#include "h/Copy.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;

Copy::Copy(const std::string fromFile, std::string toFile)
{
    this->fromFile = fromFile;
    this->toFile = toFile;

    this->CopyFile();
}

void Copy::CopyFile() 
{
    cout << "Kopiowanie z pliku " << this->fromFile << " do pliku " << this->toFile << "... " << endl;
    
    
    ifstream file1 (this->fromFile.c_str(), fstream::binary);
    if(!file1.good())
        cout << "Plik " << this->fromFile << " nie istnieje" << endl;
    
    else 
    {
            ofstream file2 (this->toFile.c_str(), fstream::trunc|fstream::binary);
            if(!file2.good())
                cout << "Nie można otworzyć pliku " << this->toFile << " do zapisu" << endl;
            else 
            {
                file2 << file1.rdbuf();
                file1.close();
                file2.close();
                cout << "Wykonano" << endl;
            }
    }
        
}

