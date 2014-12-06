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

typedef struct Plane {
	Point position;
	Vector2d velocity;
} Plane;

poly Plane PlaneMake(poly Point position, poly Vector2d velocity);
// poly Plane PlaneMake(float x, float y, float magnitude, radian direction);
poly Plane PlaneMakeRandom();
poly Plane PlaneMakeRandomGaussian(float peak);

#endif /* PLANE_H_ */
