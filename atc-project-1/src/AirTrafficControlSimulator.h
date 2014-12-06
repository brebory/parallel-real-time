/*
 * AirTrafficControlSimulator.h
 *
 *  Created on: Nov 23, 2014
 *      Author: broberto
 */

#ifndef AIRTRAFFICCONTROLSIMULATOR_H_
#define AIRTRAFFICCONTROLSIMULATOR_H_

#include "AirTrafficControlUtilities.h"
#include "Plane.h"

typedef struct Grid {
	Point origin;
	float width;
	float height;
} Grid;

void update(Grid, poly Plane); /* Updates Plane for dt 0.5s */
// void display();

#endif /* AIRTRAFFICCONTROLSIMULATOR_H_ */
