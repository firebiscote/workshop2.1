#include "pch.h"

using namespace std;

void CLa::ma1(void) {
	cout << "je travaille pour Cla" << endl;
	this->b1.mb();
}

void CLa::ma2(void) {
	cout << "je travaille pour CLa" << endl;
	this->p1 = new CLb();
	this->p1->mb();
}

void CLa::ma3(CLb ov) {
	cout << "je travaille pour CLa" << endl;
	ov.mb();
}

void CLa::ma4(CLb& oa) {
	cout << "je travaille pour CLa" << endl;
	oa.mb();
}

void CLa::ma5(CLb* op) {
	cout << "je travaille pour CLa" << endl;
	op->mb();
}