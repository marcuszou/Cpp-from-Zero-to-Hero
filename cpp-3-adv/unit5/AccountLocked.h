#ifndef MAIN_ACCOUNTLOCKED_H
#define MAIN_ACCOUNTLOCKED_H

#include <stdexcept>
using namespace std;

class AccountLocked : public exception {
public:
    const char* what() const noexcept override {
        //throw invalid_argument{""};
        return "Your account is locked. Contact the admin.";
    }
};


#endif //MAIN_ACCOUNTLOCKED_H
