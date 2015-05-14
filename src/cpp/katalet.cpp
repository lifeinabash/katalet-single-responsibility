#include <iostream>
#include <string>

int main( int argc, char *argv[] )
{
    std::string kataName = argv[1];
    std::cout << "The katalet you have selected is " << kataName << std::endl;
    return 0;
}

//class Katalet
//
//{
//    public static void main (String[] args) {
//        String kataName = args[0];
//        System.out.format("The katalet you have selected is %s\n", kataName);
//    }
//}
