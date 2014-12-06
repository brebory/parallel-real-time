/*
 * Radar.h
 *
 *  Created on: Dec 6, 2014
 *      Author: broberto
 */

#ifndef RADAR_H_
#define RADAR_H_

#include "AirTrafficControlUtilities.h"
#include "Plane.h"

typedef struct Radar {
	Point position;
	feet altitude;
	short match;
} Radar;

Radar[96] radar_update(cs_rand48_stream stream, Radar[96] radar, poly Plane plane);

#endif /* RADAR_H_ */
