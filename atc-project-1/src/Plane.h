/*
 * Plane.h
 *
 *  Created on: Nov 23, 2014
 *      Author: broberto
 */

#ifndef PLANE_H_
#define PLANE_H_

#include "AirTrafficControlUtilities.h"
#include <rngp.h>
#include <lib_ext.h>

typedef struct Plane {
	Point position;
	Vector2d velocity;
} Plane;

// poly Plane PlaneMake(Point position, Vector2d velocity);
// poly Plane PlaneMake(float x, float y, float magnitude, radian direction);
poly Plane PlaneMakeRandom(cs_rand48_stream stream);
poly Plane PlaneMakeRandomGaussian(cs_rand48_stream stream, float peak);

#endif /* PLANE_H_ */
