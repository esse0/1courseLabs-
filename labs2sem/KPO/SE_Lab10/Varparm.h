#pragma once

#include <iostream>
#include <stdarg.h>

namespace Varparm {
	int ivarparm(int frst, ...);
	int svaparm(short frst, ...);
	double fvarparm(float frst, ...);
	double dvarparm(double frst, ...);
}