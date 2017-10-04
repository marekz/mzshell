#ifndef COPY_H
#define COPY_H

#include <string>

using namespace std;

class Copy {
public:
    Copy(const std::string fromFile, std::string toFile);
    void CopyFile();
private:
    string fromFile;
    string toFile;
};

#endif /* COPY_H */

