#include "temperature.hpp"
#include <iostream>

int main(void)
{
    double temp = 32.0;
    std::cout << "temp (F) = " << temp << " , temp (C) = " << f_to_celsius(temp) << std::endl;
    std::cout << f_to_celsius(212.0) << std::endl;
    std::cout << f_to_celsius(-40.0) << std::endl;

    std::cout << f_to_kelvin(32.0) << std::endl;

    convert_f_to_celsius(temp);
    std::cout << "temp is now " << temp << std::endl;

    std::cout << "Counting to 25" << std::endl;
    count(25);

    temperature_table(0.0, 50.0);


    if(check_temperature(-1000.0))
        std::cout << "Temperature is ok!" << std::endl;
    else
        std::cout << "Temperature is unphysical!" << std::endl;

    return 0;
}

