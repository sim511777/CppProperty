#pragma once
#include <functional>

template<typename T>
class property {
private:
    std::function<void(T)> _setter;
    std::function<T()> _getter;
public:
    property(std::function<void(T)> setter, std::function<T()> getter) : _setter(setter), _getter(getter) {
    }
    operator T() const {
        return _getter();
    }
    property<T>& operator= (const T &value) {
        _setter(value);
        return *this;
    }
};
