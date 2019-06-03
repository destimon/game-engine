#include <iostream>
#include "src/Core.h"
#include "src/sfx/sfxCore.h"

int main() {
    Core cr;

    cr.build();
    cr.core_playsound();
    getchar();
    return 0;
}