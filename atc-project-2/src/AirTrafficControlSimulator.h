/*
 * AirTrafficControlSimulator.h
 *
 *  Created on: Nov 23, 2014
 *      Author: broberto
 *
 *      Provides basic functions for running the simulation, including
 *      functions to update the state of the running simulation and to display output
 *      for each member of the simulation. Also contains structures to represent the
 *      internal grid that the simulation runs on.
 */

#ifndef AIRTRAFFICCONTROLSIMULATOR_H_
#define AIRTRAFFICCONTROLSIMULATOR_H_

#include "AirTrafficControlUtilities.h"
#include "Plane.h"
#include "FlightRecord.h"
#include "Radar.h"

typedef struct Grid {
	Point origin;
	float width;
	float height;
} Grid;

poly Plane atc_create(cs_rand48_stream stream);
void atc_update(Grid grid, poly Plane plane, poly FlightRecord record, Radar *radar); /* Updates Plane for dt 0.5s */
void atc_display(poly Plane plane, poly FlightRecord record, Radar *radar);

#endif /* AIRTRAFFICCONTROLSIMULATOR_H_ */
