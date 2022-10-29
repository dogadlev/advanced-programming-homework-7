#include <iostream>
#include <vector>
#include <algorithm>

template <class T>
void printVector(const std::vector<T> &_vec)
{
    for (typename std::vector<T>::const_iterator itr = _vec.begin(); itr != _vec.end(); ++itr)
        std::cout << *itr << " ";
    std::cout << std::endl;
}

template <class T>
void removeDuplicates(std::vector<T> &_vec)
{
    std::sort(_vec.begin(), _vec.end());
    typename std::vector<T>::iterator itr = std::unique(_vec.begin(), _vec.end());
    _vec.erase(itr, _vec.end());
}

int main(int argc, char **argv)
{
    std::vector<int> vec{1, 1, 2, 5, 6, 1, 2, 4};
    std::cout << "[IN]: ";
    printVector(vec);

    removeDuplicates(vec);

    std::cout << "[OUT]: ";
    printVector(vec);

    return 0;
}