#include <iostream>
#include "AccountLocked.h"

using namespace std;

void login() {
    throw AccountLocked{};
}

int main() {
    try {
        login();
    }
    catch (const exception& ex) {
        cout << ex.what();
    }
    return 0;
}
