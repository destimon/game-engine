#include<GL/freeglut.h>
#include "src/Core.h"

int main(int argc,char **argv)
{
    Core cr;
    Graphics gfx;

    gfx = cr.getGfx();
    cr.core_playsound();
    gfx.init(&argc, argv);
    return 0;
}