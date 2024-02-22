#include <stdexcept>
void hari_kari() noexcept {
    throw std::runtime_error{"Goodbye, cruel world!"};
}

int main () {
    hari_kari();
}