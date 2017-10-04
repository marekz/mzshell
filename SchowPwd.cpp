#include "h/SchowPwd.h"
#include "h/GetPatch.h"

SchowPwd::SchowPwd() {
    GetPatch newGetPatch;
    cout << newGetPatch.ReturnPatch() << endl;
}