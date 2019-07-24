#include "temperature.hpp"
#include <iostream>


/* Instructor example
 */
double f_to_celsius(double f_temp)
{
    const double shift = 32.0;
    const double scale = 1.8;

    return (f_temp - shift)/scale;
}


/* Instructor example
 */
void convert_f_to_celsius(double & f_temp)
{
    const double shift = 32.0;
    const double scale = 1.8;
    f_temp = (f_temp - shift)/scale;
}


/* Instructor example
 */
void count(int max)
{
    for(int i = 0; i < max; i++)
        std::cout << " i = " << i << std::endl;
}


/* Student exercise

   Write a function that converts f to kelvin
*/
double f_to_kelvin(double f_temp)
{
    return f_to_celsius(f_temp) - 273.15;
}


/* Instructor example
 */
bool check_temperature(double f_temp)
{
    double k_temp = f_to_kelvin(f_temp);
    if(k_temp < 0.0)
        return false;
    if(k_temp > 1.0e6)
        return false;

    return true;
}



/* Student exercise

   Write a function to create a table of temperature conversions

   Given a start and end temperature
   Also print the state of water at that temperature
*/
void temperature_table(double start, double end)
{
    for(double temperature = start; temperature <= end; temperature += 5.0)
    {
        double celsius = f_to_celsius(temperature);
        std::string state = "liquid";
        if(celsius <= 0)
            state = "solid";
        if(celsius >= 100)
            state = "gas";
        std::cout << temperature << " F  =  " << celsius << " C  water is " << state << std::endl;
    }
}
