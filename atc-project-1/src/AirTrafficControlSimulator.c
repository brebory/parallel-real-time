/*
 * AirTrafficControlSimulator.h
 *
 *  Created on: Nov 23, 2014
 *      Author: broberto
 */

#include "AirTrafficControlSimulator.h"
#include <math.h>

void update(Grid grid, poly Plane plane) {
	// Updates plane coordinates for 0.5s time-step according to specification.
	if ((plane.position.x + plane.velocity.dx) < grid.width) {
		if (abs(plane.position.y + plane.velocity.dy) < grid.height) {
			plane.position.x += plane.velocity.dx;
			plane.position.y += plane.velocity.dy;
		} else {
			if (plane.velocity.dy > 0) {
				// Plane is moving north, move to southernmost position.
				plane.position.y = -grid.height;
			} else {
				// Plane is moving south, move to northernmost position.
				plane.position.y = grid.height;
			}
			plane.position.x = (plane.velocity.dx / plane.velocity.dy) * plane.position.y;
		}
	} else {
		if (plane.velocity.dx > 0) {
			// Plane is moving east, move to westernmost position.
			plane.position.x = -grid.width;
		} else {
			// Plane is moving west
			plane.position.x = grid.width;
		}
		plane.position.y = (plane.velocity.dy / plane.velocity.dx) * plane.position.x;
	}
}
