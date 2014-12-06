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

poly Plane atc_create();
void atc_update(Grid, poly Plane); /* Updates Plane for dt 0.5s */
void atc_display(poly Plane);

#endif /* AIRTRAFFICCONTROLSIMULATOR_H_ */
