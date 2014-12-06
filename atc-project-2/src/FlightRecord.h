/*
 * FlightRecord.h
 *
 *  Created on: Dec 6, 2014
 *      Author: broberto
 *
 *      Provides the Flight Record functionality for project 2. Handles tracking
 *      and correlation of individual simulated planes to flight record information
 *      on each PE.
 */

#ifndef FLIGHTRECORD_H_
#define FLIGHTRECORD_H_

#include "AirTrafficControlUtilities.h"
#include "Plane.h"
#include "Radar.h"
#include <rngp.h>
#include <lib_ext.h>

typedef struct FlightRecord {
	Point lastPosition;
	Point nextPosition;
	Vector2d velocity;
	feet altitude;
} FlightRecord;

poly FlightRecord flight_record_update(poly Plane plane, poly FlightRecord record);
poly correlate(Radar *radar, poly FlightRecord record);

#endif /* FLIGHTRECORD_H_ */
