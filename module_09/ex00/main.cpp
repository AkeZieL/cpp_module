#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Please enter a file for data !" << std::endl;
        return 1;
    }
    try{
        BitCoin bc;
        bc.takeInput(argv[1]);
  
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
