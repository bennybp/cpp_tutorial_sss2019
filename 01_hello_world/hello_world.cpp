/* Hello world Lesson

   0.) By default, language is bare-bones. Must include stuff.
   1.) main function is analogous to '__main__' in python
   2.) Execution of an executable starts here
   3.) std::cout is used to output data (similar to python print)
   4.) std::endl adds a newline (python adds by default)
   5.) std::string is similar to python str
   6.) Comments - lines starting with //, or blocks
   7.) Variables have types that must be declared, and can't be changed
   8.) Values of const variables cannot be changed
   9.) Fstreams can be used for output as well
*/

#include <iostream>
#include <fstream>
#include <string>

int main(void)
{
    std::cout << "Hello, world!" << std::endl;

    int a = 10;
    std::string name = "Ben";
    std::cout << "Hello, " << name << " a = " << a << std::endl;

    // Can't change type of the variable
    //a = "Ben";

    // Can't change values of const
    //const int b = 20;
    //b = 30;


    // Optional: Fstream?
    //std::ofstream ofs("text.txt");
    //ofs << "Hello, file world!" << std::endl;
    //ofs.close();

    return 0;
}
