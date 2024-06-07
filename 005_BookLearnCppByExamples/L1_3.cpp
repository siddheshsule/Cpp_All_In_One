#include <iostream>
#include <iterator>
#include <ostream>


template<typename T, typename U>
auto simple_plus(T lhs, U rhs) ->decltype(lhs + rhs)
{
    return lhs + rhs;
}

auto main() -> int {
    std::cout << simple_plus(2.25, 2) << std::endl;
}



