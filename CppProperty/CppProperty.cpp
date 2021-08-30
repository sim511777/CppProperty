#include <iostream>
#include "Property.h"

class Person {
private:
    // 내부 변수
    int _age;
public:
    // property
    property<int> age {
        [this](int value) { // setter
            this->_age = value;
        },
        [this]() -> int {   // getter
            return this->_age;
        },
    };
};

int main() {
    Person p;
    p.age = 10;
    std::cout << p.age;
}
