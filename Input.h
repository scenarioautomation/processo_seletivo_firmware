#ifndef INPUT_H
#define INPUT_H

#include "Gpio.h"
#include <any>

template<typename DerivedInput>
class Input : public GPIO
{
public:
    Input() = default;
    std::any read() { return static_cast<DerivedInput &>(*this).read(); }
};

#endif // INPUT_H
