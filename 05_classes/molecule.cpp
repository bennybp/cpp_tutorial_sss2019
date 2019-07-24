#include "molecule.hpp"
#include <iostream>


Molecule::Molecule(std::string name)
{
    name_ = name;
}

Molecule::Molecule(std::string name, std::vector<Atom> atoms)
{
    name_ = name;
    atoms_ = atoms;
}

int Molecule::num_atoms(void)
{
    return atoms_.size();
}
        

void Molecule::add_atom(int z_number, int charge, std::string symbol, double x, double y, double z)
{
    Atom a;
    a.z_number = z_number;
    a.symbol = symbol;
    a.x = x;
    a.y = y;
    a.z = z;
    a.charge = charge;

    atoms_.push_back(a);
}


void Molecule::translate(double dx, double dy, double dz)
{
    for(auto & it : atoms_)
    {
        it.x += dx;
        it.y += dy;
        it.z += dz;
    }
}

void Molecule::print(void)
{
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Atoms:" << std::endl;
    for(const auto & it : atoms_)
    {
        std::cout << it.symbol << "  " << it.z_number << "  " << it.charge << " "
                  << it.x << " " << it.y << " " << it.z << std::endl;
    }
    
}

int Molecule::get_charge(void)
{
    int charge = 0;
    for(auto & it : atoms_)
        charge += it.charge;

    return charge;
}
