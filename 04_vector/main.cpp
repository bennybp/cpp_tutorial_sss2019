/* Introduction to std::vector

   0.) Vectors are similar to python lists, except
       a.) Type must be declared
       b.) Are homogeneous
   1.) Accessing vector elements two ways
       a.) [] operator
       b.) at() function
   2.) Common functions
       a.) size
       b.) push_back
       c.) clear
   3.) Iteratoring over the vector
       a.) by index
       b.) range-based for loops
*/

#include "temperature.hpp"
#include <vector>
#include <iostream>


/* Instructor
*/
void print_temperatures(std::vector<double> temperatures)
{
    for(size_t i = 0; i < temperatures.size(); i++)
        std::cout << "T = " << temperatures[i] << std::endl;
}


/* Student
*/
std::vector<double> convert_temperatures(std::vector<double> temperatures)
{
    std::vector<double> converted;
    for(auto it : temperatures)
        converted.push_back(f_to_celsius(it));
    return converted;
}


int main(void)
{
    std::vector<double> temperatures;
    std::cout << "Vector length = " << temperatures.size() << std::endl;

    // similar to python append
    temperatures.push_back(100.0);
    std::cout << "Vector length = " << temperatures.size() << std::endl;
    std::cout << "Element 0: " << temperatures[0] << std::endl;
    std::cout << "Element 0: " << temperatures.at(0) << std::endl;

    // we only have one element!
    //std::cout << "Element 1: " << temperatures[1] << std::endl;
    //std::cout << "Element 1: " << temperatures.at(1) << std::endl;

    // Erase all elements of the vector
    temperatures.clear();
    std::cout << "Vector length after clearing = " << temperatures.size() << std::endl;

    temperatures.push_back(0.0);
    temperatures.push_back(10.0);
    temperatures.push_back(33.0);
    temperatures.push_back(-40.0);

    std::cout << "My temperatures" << std::endl;
    print_temperatures(temperatures);

    std::vector<double> c_temperatures = convert_temperatures(temperatures);
    std::cout << "Converted temperatures" << std::endl;
    print_temperatures(c_temperatures);


    return 0;
}


