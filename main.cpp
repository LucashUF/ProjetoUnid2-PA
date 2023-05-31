#include <iostream>
#include <fstream>

#include "sculptor.h"

int main() {

    //define matrix size
    Sculptor v(100, 100, 100);

    
    v.setColor(1, 0, 0, 1.);
    v.putBox(40, 60, 40, 60, 40, 60);
    v.cutBox(45, 55, 45, 55, 45, 55);

    v.setColor(0, 1, 0, 1);
    v.putSphere(80, 70, 70, 10);
    v.cutSphere(80, 70, 70, 7);

    v.setColor(0, 0, 1, 1);
    v.putEllipsoid(25, 30, 40, 15, 15, 25);
      
  
    
    //create file.off
    v.writeOFF("Teste.off");

    std::cout << "aaaa" << std::endl;

    return 0;
}
