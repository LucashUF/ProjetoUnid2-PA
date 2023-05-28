#include <iostream>
#include <fstream>

#include "sculptor.h"

int main() {
    int size = 150; //lenght of sandbox
    int halfR = (size / 2) - 1;
    int halfL = (size / 2);

    //define matrix size
    Sculptor sauron(size, size, size);

    //stronghold skeleton
    sauron.setColor(.1, .1, .1, 1.);
    sauron.putBox(halfL - 16, halfR + 16, 0, 86, halfL - 16, halfR + 16);
    sauron.putBox(halfL - 14, halfR + 14, 0, 172, halfL - 14, halfR + 14);
    sauron.putBox(halfL - 10, halfR + 10, 0, 258, halfL - 10, halfR + 10);

    //stronghold skeleton memory saving
    sauron.cutBox(halfL - 16 + 1, halfR + 16 - 1, 0 + 1, 86 - 1, halfL - 16 + 1, halfR + 16 - 1);
    sauron.cutBox(halfL - 14 + 1, halfR + 14 - 1, 0 + 1, 172 - 1, halfL - 14 + 1, halfR + 14 - 1);
    sauron.cutBox(halfL - 10 + 1, halfR + 10 - 1, 0 + 1, 258 - 1, halfL - 10 + 1, halfR + 10 - 1);

    //sauron eyeball box PART 1
    sauron.putEllipsoid(halfR, 258 - 3, halfR, 11, 20, 11);
    sauron.cutEllipsoid(halfR, 258, halfR, 11, 18, 11);

    //sauron eyeball box PART 2
    sauron.cutEllipsoid(halfR, 258, halfR + 10, 10, 20, 1);
    sauron.cutEllipsoid(halfR, 258, halfR - 10, 10, 20, 1);
    sauron.cutEllipsoid(halfR + 10, 258, halfR, 1, 20, 10);
    sauron.cutEllipsoid(halfR - 10, 258, halfR, 1, 20, 10);
    sauron.cutBox(halfL - 16, halfR + 16, 266, 268, halfL - 16, halfR + 16);

    //sauron eyeball box PART 3
    sauron.putBox(halfR + 8, halfR + 10, 250, 261, halfR + 8, halfR + 10);
    sauron.cutBox(halfR + 8, halfR + 9, 257, 261, halfR + 8, halfR + 9);

    //sauron eyeball box PART 3.1
    sauron.putBox(halfR + 8, halfR + 10, 250, 261, halfR - 10, halfR - 8);
    sauron.cutBox(halfR + 8, halfR + 9, 257, 261, halfR - 9, halfR - 8);

    //sauron eyeball box PART 3.2
    sauron.putBox(halfL - 10, halfL - 8, 250, 261, halfR + 8, halfR + 10);
    sauron.cutBox(halfL - 9, halfL - 8, 257, 261, halfR + 8, halfR + 9);

    //sauron eyeball box PART 3.3
    sauron.putBox(halfL - 10, halfL - 8, 250, 261, halfL - 10, halfL - 8);
    sauron.cutBox(halfL - 9, halfL - 8, 257, 261, halfL - 9, halfL - 8);

    //sauron eyeball
    sauron.setColor(.8, .4, .2, 1.);
    sauron.putEllipsoid(halfR, 258, halfR, 7, 6, 6);

    //sauron eyeball memory saving
    sauron.cutEllipsoid(halfR, 258, halfR, 7 - 1, 6 - 1, 6 - 1);

    //sauron pupil
    sauron.setColor(.2, .1, .1, 1.);
    sauron.putBox(halfL - 2, halfR + 2, 257, 260, halfL + 4, halfR + 6);
    sauron.setColor(.1, .1, .1, 1.);
    sauron.putBox(halfL - 1, halfR + 1, 256, 261, halfL + 4, halfR + 6);

    //soil
    sauron.setColor(165, 195, 162, 1.);
    sauron.putEllipsoid(halfR, 0, halfR, 100, 1, 100);

    //create file.off
    sauron.writeOFF("Torre de Sauron.off");

    std::cout << "aaaa" << std::endl;

    return 0;
}
