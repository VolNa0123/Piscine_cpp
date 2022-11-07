#include "Data.hpp"

int main (void)
{
    Data data("ПРивет");
    uintptr_t raw;
    Data *other;

    std::cout << data.getProof() << std::endl;

    raw = data.serialize(&data);
    other = data.deserialize(raw);

    std::cout << other->getProof() << std::endl;

    return (0);
}