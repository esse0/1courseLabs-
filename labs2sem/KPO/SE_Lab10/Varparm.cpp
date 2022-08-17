#include "Varparm.h"

namespace Varparm {

	int ivarparm(int frst, ...)
	{
		int res = 1;
		int n = 1;

		int* p = &frst;

		while (n <= frst) {
			res = res * p[n];
			n++;
		}

		return res;
	}

	int svaparm(short frst, ...) {
		int res = 0;
		int n = 1;

		int* p = (int*)(&frst);

		while (n <= frst) {
			if (p[n] > res) res = p[n];
			n++;
		}

		return res;
	}

	double fvarparm(float frst, ...) {

		int n = 0;
		double* p = (double*)(&frst + 1);
		double res = frst;

		while (p[n] != (double)FLT_MAX) {
			res += p[n++];
		}

		return res;
	}

	double dvarparm(double frst, ...) {

		double* p = &frst;
		double res = 0.0;
		int n = 0;

		while (p[n] != DBL_MAX) {
			res += p[n++];
		}

		return res;
	}

}