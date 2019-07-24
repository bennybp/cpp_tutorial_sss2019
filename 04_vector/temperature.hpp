/* Functions and control flow

   0.) Functions declarations are often put in a header file
   1.) Definition is in source file (or header file)
   2.) pragma once is important
   3.) Include files on that are needed
*/

#pragma once


/* Instructor example
 */
double f_to_celsius(double f_temp);


/* Instructor example
 */
void convert_f_to_celsius(double & f_temp);


/* Instructor example
 */
void count(int max);


/* Student exercise

   Write a function that converts f to kelvin
*/
double f_to_kelvin(double f_temp);


/* Instructor example
 */
bool check_temperature(double f_temp);


/* Student exercise

   Write a function to create a table of temperature conversions

   Given a start and end temperature
   Also print the state of water at that temperature
*/
void temperature_table(double start, double end);
