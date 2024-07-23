#ifndef OUTPUT_H
#define OUTPUT_H

#include "Gpio.h"
#include <any>

template<typename DerivedOutput>
class Output : public GPIO
{
public:
    Output() = default;
    void setValue(std::any value) { static_cast<DerivedOutput &>(*this).setValue(value); }
};

#endif // OUTPUT_H
