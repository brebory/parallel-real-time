#include "AirTrafficControlSimulator.h"

#define MAX_ITER 300

int main(int argc, char *argv[]) {
	// Run simulation for MAX_ITER iterations.
	atc_create();
	for (int i = 0; i < MAX_ITER; i++) {
		atc_display();
		atc_update();
	}
	return 0;
}
