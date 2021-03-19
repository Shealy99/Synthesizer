#include <iostream>
#include "olcNoiseMaker.h"

using namespace std;

int main(){

	vector<wstring> devices = olcNoiseMaker<short>::Enumerate();

	olcNoiseMaker<short> sound(devices[0]);

	return 0;
}