//
// Created by desta on 03.06.2019.
//

#include "Core.h"
#include <iostream>
#include <cstdio>
#include <ctime>
#include <chrono>
#include <cstring>
#include <stdio.h>
#include <time.h>
#include <windows.h>

Core::Core() {

}

Core::~Core() {

}

int Core::build() {


    std::cout << "[" << this->getCurrentTime() << "] " << "Build start..." << std::endl;
    std::cout << "[" << this->getCurrentTime() << "] " << "(GRAPHICS) init." << std::endl;
//    gfx.init();
    std::cout << "[" << this->getCurrentTime() << "] " << "(GRAPHICS) create window." << std::endl;
//    gfx.createWindow();
    std::cout << "[" << this->getCurrentTime() << "]" << " Build finished!" << std::endl;
    return 0;
}

char *Core::getCurrentTime() {
    auto start = std::chrono::system_clock::now();
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    return (strtok(std::ctime(&end_time), "\n"));
}

const sfxCore &Core::getC_sfx()  {
    std::cout << "[" << this->getCurrentTime() << "] " << "(CORE) Get SFX function" << std::endl;
    return c_sfx;
}

int Core::core_playsound() {
    std::cout << "[" << this->getCurrentTime() << "] " << "(CORE) Play sound" << std::endl;
    c_sfx.playSound();
    return 0;
}

const Graphics &Core::getGfx() const {
    return gfx;
}
