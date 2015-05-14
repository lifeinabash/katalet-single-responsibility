#include <iostream>
#include <string>

int main( int argc, char *argv[] )
{
    if ( argc < 2 ) {
        std::cout << "Please enter a katalet name." << std::endl;
        return 1;
    }

    std::string kataName = argv[1];
    std::cout << "The katalet you have selected is " << kataName << std::endl;
    return 0;
}
