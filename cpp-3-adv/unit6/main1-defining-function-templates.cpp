#include <iostream>
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
    auto result = larger<double> (1, 2.2);
    //larger (1,2);
    //larger ('a', 'b');
    display('a', 1);
    display(1,1);

    return 0;
}

