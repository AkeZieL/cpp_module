#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <cstdlib>

class RPN
{
    private:
            std::stack<int> num;
    public:
            RPN();
            RPN(RPN const &copy);
            ~RPN();
            RPN& operator=(const RPN &src);

            void calcul(std::string input); 
};
