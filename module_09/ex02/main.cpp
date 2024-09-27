#include "Pmerge.hpp"

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        Pmerge pmerge(argc, argv);
        return 0;
    }
    return 1;
}
