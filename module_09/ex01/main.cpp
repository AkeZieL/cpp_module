#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        RPN polish;

        polish.calcul(argv[1]);
        return 0;
    }
    return 1;
}
