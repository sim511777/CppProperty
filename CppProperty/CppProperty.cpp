#include <iostream>
#include "Property.h"

class Person {
private:
    int _age;
public:
    // Property 선언
    property<int> age {
        // setter
        [this](int value) {
            _age = value;
        },
        // getter
        [this]() -> int {
            return _age;
        }
    };
};

int main() {
    Person p;
    p.age = 10;
    std::cout << p.age;
}
