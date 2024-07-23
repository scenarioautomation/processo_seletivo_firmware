#ifndef GPIO_H
#define GPIO_H

#include <cstdint>

class GPIO
{
public:
    enum class LogicLevel : uint8_t { LOW = 0, HIGH = 1 };

    GPIO() = default;
    GPIO(uint8_t t_pinNumber)
        : m_pinNumber(t_pinNumber)
    {}

    void configureOutputPin();
    void configureInputPin();

    void setLogicLevelPin(LogicLevel level);

    LogicLevel getPinState();

private:
    uint8_t m_pinNumber;
    LogicLevel m_logicLevel;
};

#endif // GPIO_H
