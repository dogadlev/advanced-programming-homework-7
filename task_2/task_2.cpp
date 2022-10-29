#include <iostream>
#include <vector>
#include <list>
#include <set>

template <class T>
void print_container(const T& _container)
{
    for (typename T::const_iterator itr = _container.begin(); itr != _container.end(); ++itr)
        std::cout << *itr << ", ";
    std::cout << std::endl;
};

int main(int argc, char **argv)
{
    std::set<std::string> test_set = {"one", "two", "three", "four"};
    print_container(test_set);
    //The C++ Set is an associative container that contains a sorted set of unique objects.

    std::list<std::string> test_list = {"one", "two", "three", "four"};
    print_container(test_list);

    std::vector<std::string> test_vector = {"one", "two", "three", "four"};
    print_container(test_vector);

    return 0;
}