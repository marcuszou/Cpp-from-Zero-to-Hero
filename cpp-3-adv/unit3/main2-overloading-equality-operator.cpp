#include <iostream>
#include "Length.h"

using namespace std;

int main() {
    Length first{10};
    Length second{10};

    if(first == 10)
        cout << "First number is 10" << endl;

    return 0;
}

