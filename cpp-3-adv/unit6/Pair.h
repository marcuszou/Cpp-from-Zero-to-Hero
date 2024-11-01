#ifndef MAIN_PAIR_H
#define MAIN_PAIR_H

template<typename K, typename V>
class Pair {
private:
    K key;
    V value;
public:
    V getValue() const;

    void setValue(V value);

    K getKey() const;

    void setKey(K key);

public:
    Pair(V value, K key);
};

template<typename K, typename V>
V Pair<K, V>::getValue() const {
    return value;
}

template<typename K, typename V>
void Pair<K, V>::setValue(V value) {
    Pair::value = value;
}

template<typename K, typename V>
K Pair<K, V>::getKey() const {
    return key;
}

template<typename K, typename V>
void Pair<K, V>::setKey(K key) {
    Pair::key = key;
}

template<typename K, typename V>
Pair<K, V>::Pair(V value, K key):value(value), key(key) {}


#endif //MAIN_PAIR_H
