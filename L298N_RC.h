/*
# L298N.h - Library for interfacing with the L298N motor driver
# Created by AshaZev, 2017/08/27.
# Last updated, 2018/12/24.
*/

#ifndef L298N_h
#define L298N_h

#include "Arduino.h"
#include "H_Bridge.h"

class L298N
{
	private:
	bool useMotorA;
	bool useMotorB;

	public:
	L298N(bool motorA, bool motorB);
	H_Bridge motorA;
	H_Bridge motorB;

};

#endif
