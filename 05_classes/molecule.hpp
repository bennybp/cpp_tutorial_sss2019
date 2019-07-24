/*! Basic c++ classes and structures

    0.) Basic structure type
    1.) Classes
        a.) Private vs. public
        b.) Typically, data is private, functions are either
    2.) Special class functions
        a.) Constructors
        b.) Copy constructors
    3.) Definitions in headers, function definitions in source files
    4.) Instructor examples
        a.) constructors
        b.) num_atoms
        c.) add_atom
    5.) Student exercises
        a.) get_charge
        b.) translate
        c.) print
*/

#pragma once

#include <string>
#include <vector>


struct Atom
{
    int z_number;
    std::string symbol;
    int charge;
    double x;
    double y;
    double z;
};



class Molecule
{
    private:
        std::vector<Atom> atoms_;
        std::string name_;

    public:
        Molecule(std::string);
        Molecule(std::string, std::vector<Atom> atoms);

        int num_atoms(void);

        int get_charge(void);

        void add_atom(int z_number, int charge, std::string symbol, double x, double y, double z);

        void translate(double dx, double dy, double dz);

        void print(void);
};

