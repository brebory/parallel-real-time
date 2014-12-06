/*
 * AirTrafficControlUtilities.h
 *
 *  Created on: Nov 23, 2014
 *      Author: broberto
 *
 *      Provides basic functions and structures for working with AirTrafficControlSimulation
 *      including 2d vectors with dx/dy, and 2d points.
 *      Also provides ways to randomly generate values for each of these types.
 */

#ifndef AIRTRAFFICCONTROLUTILITIES_H_
#define AIRTRAFFICCONTROLUTILITIES_H_

#include <rngp.h>
#include <lib_ext.h>

typedef float radian;

typedef struct Point {
	float x;
	float y;
} Point;

Point PointMake(float x, float y);
Point PointMakeRandom(cs_rand48_stream stream);

typedef struct Vector2d {
	float dx;
	float dy;
} Vector2d;

Vector2d Vector2dMake(float dx, float dy);

Vector2d Vector2dMakeRandom(cs_rand48_stream stream); /* Returns a random unit vector */
Vector2d Vector2dMakeRandomGaussian(cs_rand48_stream stream, float max, float offset); /* Returns a random vector with magnitude generated from gaussian distribution peaking at peak */

#endif /* AIRTRAFFICCONTROLUTILITIES_H_ */
