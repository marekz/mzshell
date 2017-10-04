#include <string>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include "h/AddDomain.h"

using namespace std;

AddDomain::AddDomain(std::string order) {
    this->order = order;
    cout << "Dodanie domeny apache: " << this->order << endl;
    
	string domainName = this->order;
	string ApacheWHostPath = "/etc/apache2/sites-available/";
	string fileExtension = ".conf";
	string FullPathWithFile = ApacheWHostPath + domainName + fileExtension;
	cout << FullPathWithFile << endl;
	
	ofstream outFile;
	outFile.open(FullPathWithFile.c_str());
	
	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "<VirtualHost *:80>" << endl;
	outFile << "	ServerName " << domainName << endl;
	outFile << "	ServerAdmin webmaster@localhost"<< endl;
	outFile << "	DocumentRoot /var/www/html/" << domainName << endl;
	outFile << "	ErrorLog ${APACHE_LOG_DIR}/error.log" << endl;
	outFile << "	CustomLog ${APACHE_LOG_DIR}/access.log combined" << endl;
	outFile << "</VirtualHost>" << endl;
	outFile.close();
        
//@todo dodać klasę tworzącą folder dla domeny wraz z plikiem index.html zawierającym podstawową strukturę
//@todo dodać klasę wprowadzającą lokalną domenę w pliku /etc/hosts        
}