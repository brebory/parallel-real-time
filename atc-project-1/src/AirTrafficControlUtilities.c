/*
 * AirTrafficControlUtilities.h
 *
 *  Created on: Nov 23, 2014
 *      Author: broberto
 */
#include "AirTrafficControlUtilities.h"
#include <stdlib.h>
#include <rngp.h>

#define M_PI 3.14159265358979323846
#define MAXIMUM_RANDOM_MAGNITUDE 20

Point PointMake(float x, float y) {
	Point result;
	result.x = x;
	result.y = y;
	return result;
}

Point PointMakeRandom() {
	Point result;
	result.x = cs_rand48();
	result.y = cs_rand48();
	return result;
}

Vector2d Vector2dMake(float dx, float dy) {
	Vector2d result;
	result.dx = dx;
	result.dy = dy;
	return result;
}

Vector2d Vector2dMakeRandom() {
	Vector2d result;
	result.dx = cs_rand48();
	result.dy = cs_rand48();
	return result;
}

Vector2d Vector2dMakeRandomGaussian(float peak) {
	// TODO: Unstub, use gaussian distribution
	return Vector2dMakeRandom();
}
