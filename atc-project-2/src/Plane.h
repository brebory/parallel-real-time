/*
 * Plane.h
 *
 *  Created on: Nov 23, 2014
 *      Author: broberto
 *
 *      Provides a basic datatype for simulating planes, stores position and velocity information
 *      in poly memory for a basic Plane database.
 */

#ifndef PLANE_H_
#define PLANE_H_

#include "AirTrafficControlUtilities.h"
#include <rngp.h>
#include <lib_ext.h>

typedef float feet;

typedef struct Plane {
	Point position;
	Vector2d velocity;
	feet altitude;
} Plane;

poly Plane PlaneMakeRandom(cs_rand48_stream stream);
poly Plane PlaneMakeRandomGaussian(cs_rand48_stream stream, float max, float offset);

#endif /* PLANE_H_ */
