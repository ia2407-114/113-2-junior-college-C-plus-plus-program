#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

void main(){
	circ_1D cir1;
	cir1.compute_circ();

	cout << "\n";

	pie_2D pie1;
	pie1.compute_area();

	cout << "\n";

	cone_3D cone1;
	cone1.compute_volume();
}