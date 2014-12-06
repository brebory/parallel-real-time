/*
 * Plane.c
 *
 *  Created on: Nov 28, 2014
 *      Author: broberto
 */

#include "Plane.h"

Plane PlaneMake(Point position, Vector2d velocity) {
	Plane result;
	result.position = position;
	result.velocity = velocity;
	return result;
}

Plane PlaneMake(float x, float y, float magnitude, radian direction) {
	Plane result;
	result.position.x = x;
	result.position.y = y;
	result.velocity.magnitude = magnitude;
	result.velocity.direction = direction;
	return result;
}

Plane PlaneMakeRandom() {
	Point randomPosition = PointMakeRandom();
	Vector2d randomVelocity = Vector2dMakeRandom();
	Plane result = PlaneMake(randomPosition, randomVelocity);
	return result;
}

Plane PlaneMakeRandomGaussian(float peak) {
	// TODO: Unstub
	return PlaneMakeRandom();
}
