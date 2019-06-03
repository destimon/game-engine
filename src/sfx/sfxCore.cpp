//
// Created by desta on 03.06.2019.
//

#include "sfxCore.h"
#include "../Core.h"
#include <windows.h>
#include <mmsystem.h>
#include <iostream>

sfxCore::sfxCore() {}

sfxCore::~sfxCore() {

}

int sfxCore::playSound() {
    PlaySound(TEXT("C:\\oof.wav"), NULL, SND_ASYNC);
    return 0;
}
