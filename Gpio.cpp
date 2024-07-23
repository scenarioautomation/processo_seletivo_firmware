#include "Gpio.h"
#include <iostream>

void GPIO::configureOutputPin()
{
    std::cout << "configuring pin: " << (int) m_pinNumber << " as output!" << std::endl;
}

void GPIO::configureInputPin()
{
    std::cout << "setting pin: " << (int) m_pinNumber << " as input!" << std::endl;
}

void GPIO::setLogicLevelPin(LogicLevel level)
{
    std::cout << "setting pin: " << (int) m_pinNumber << " to level: " << static_cast<int>(level)
              << std::endl;
    m_logicLevel = level;
}

GPIO::LogicLevel GPIO::getPinState()
{
    return m_logicLevel;
}
