#include "ex2.h"
#include <iostream>

int CLcalcul::cpteObj = 0;

CLcalcul::CLcalcul() {
	this->ini(0);
}

CLcalcul::CLcalcul(int nb) {
	this->ini(nb);
}

void CLcalcul::ini(int nb) {
	setN(nb);
	CLcalcul::cpteObj++;
	std::cout << cpteObj << std::endl;
}

void CLcalcul::carre() {
	setN(c_n * c_n);
}

void CLcalcul::setN(int nb) {
	c_n = nb;
}

int CLcalcul::getN() {
	return c_n;
}
