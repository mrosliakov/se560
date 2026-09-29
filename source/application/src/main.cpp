#include "fibonacci.hpp"
#include <print> 

int main(){
    std::print("{}\n", fibonacci_recursive(2));
    std::print("{}\n", fibonacci_recursive(10));

    std::print("{}\n", fibonacci_iterative(2));
    std::print("{}\n", fibonacci_iterative(10));
    return 0;
}