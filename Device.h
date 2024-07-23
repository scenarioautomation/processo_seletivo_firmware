#ifndef DEVICE_H
#define DEVICE_H

template<typename Input1, typename Input2, typename Output1, typename Output2>
class Device
{
public:
    explicit Device(Input1 t_input1, Input2 t_input2, Output1 t_output1, Output2 t_output2)
        : m_input1(t_input1)
        , m_input2(t_input2)
        , m_output1(t_output1)
        , m_output2(t_output2)
    {}

    void taskInputs();
    void taskOutputs();
    void checkQueue();

private:
    Input1 m_input1;
    Input2 m_input2;
    Output1 m_output1;
    Output2 m_output2;
};

#endif // DEVICE_H
