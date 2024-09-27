#ifndef PMERGE_HPP
# define PMERGE_HPP

# include <iostream>
# include <vector>
# include <list>
# include <iterator>
# include <ctime>    // Pour clock() en C++98
# include <cstdlib>  // Pour atoi()

class Pmerge
{
private:
    std::list<int> dataList;
    std::vector<int> dataVec;

public:
    Pmerge(int argc, char **argv);
    void sortList(std::list<int>& list, std::list<int>::iterator left,
                  std::list<int>::iterator right, int k);

    void sortVector(std::vector<int>& arr, int left, int right, int k);
    template <typename T>
    void printCont(const T& container);
    void insertionSortList(std::list<int>& list);
    void mergeList(std::list<int>::iterator left,
               std::list<int>::iterator mid, std::list<int>::iterator right);
    void insertionSortVec(std::vector<int>& arr, int left, int right);
    void mergeVec(std::vector<int>& arr, int left, int mid, int right);
};

#endif

