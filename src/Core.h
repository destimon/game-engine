//
// Created by desta on 03.06.2019.
//

#ifndef UNTITLED_CORE_H
#define UNTITLED_CORE_H

#include "sfx/sfxCore.h"

class Core {
public:
    Core();
    virtual ~Core();

    int build();
    char* getCurrentTime();
    int core_playsound();
    const sfxCore &getC_sfx() ;

private:
    sfxCore c_sfx;
};


#endif //UNTITLED_CORE_H
