/*
 * AirTrafficControlUtilities.h
 *
 *  Created on: Nov 23, 2014
 *      Author: broberto
 */

#ifndef AIRTRAFFICCONTROLUTILITIES_H_
#define AIRTRAFFICCONTROLUTILITIES_H_

typedef float radian;

typedef struct Point {
	float x;
	float y;
} Point;

Point PointMake(float x, float y);
poly Point PointMakeRandom();

typedef struct Vector2d {
	float dx;
	float dy;
} Vector2d;

Vector2d Vector2dMake(float dx, float dy);

poly Vector2d Vector2dMakeRandom(); /* Returns a random unit vector */
poly Vector2d Vector2dMakeRandomGaussian(float peak); /* Returns a random vector with magnitude generated from gaussian distribution peaking at peak */

#endif /* AIRTRAFFICCONTROLUTILITIES_H_ */
