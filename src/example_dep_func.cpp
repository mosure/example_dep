#include "example_dep_func.hpp"


namespace example_dep {

std::string do_something(const std::string& input) {
    return input + ", World!";
}

} // namespace example_dep
