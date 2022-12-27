#include <iostream>

#include "attack_map.h"

void x() {
    auto initializer = NaiveAttackMapInitializer();
    initializer.Initialize();
    std::cout << initializer.IsInitialized() << std::endl;

    auto kingAttackMap = initializer.GetKingAttackMap();
    std::cout << kingAttackMap[0] << std::endl;
}

int main() {
    x();
    return 0;
}