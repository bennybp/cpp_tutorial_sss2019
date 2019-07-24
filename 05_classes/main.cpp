#include <iostream>
#include "molecule.hpp"

int main(void)
{
    Atom a;
    // do stuff with atom a

    Molecule mol("A Molecule");
    std::cout << "Number of atoms: " << mol.num_atoms() << std::endl;

    // 2 = Z number
    // 1 = charge
    mol.add_atom(2, 1, "He", 0.5, 0.75, 1.3);
    std::cout << "Number of atoms: " << mol.num_atoms() << std::endl;
    mol.print();
    std::cout << "Total charge: " << mol.get_charge() << std::endl;

    Molecule mol2 = mol;
    mol2.translate(1.0, 1.0, 1.0);
    mol2.print();
    return 0;
}
