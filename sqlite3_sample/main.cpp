#include <iostream>
#include "sqlite3.h"

using namespace std;

void main() {
    cout << "SQLite Library version : " << sqlite3_libversion() << endl;
    return;
}