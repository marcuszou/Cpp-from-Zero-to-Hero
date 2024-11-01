#include <iostream>
#include "Pair.h"
using namespace std;

// Tempplate
template<typename T>
T larger(T first, T second) {
    return (first > second) ? first : second;
}

template<typename K, typename V>
void display(K key, V value) {
    cout << key << "=" << value << endl;
}

int main() {
    Pair pair("a", 1);

    return 0;
}

