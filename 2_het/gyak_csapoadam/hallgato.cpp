#include "hallgato.h"
#include <iostream>

// lehetne using namespace Neptun; is, es akkor nem kene
// mindenhova odairni

Neptun::Hallgato::Hallgato(std::string nv, std::string nkod) {
 nev = nv;
 neptunkod = nkod;
}

void Neptun::Hallgato::print() {
	std::cout << nev << " - " << neptunkod << std::endl;
}