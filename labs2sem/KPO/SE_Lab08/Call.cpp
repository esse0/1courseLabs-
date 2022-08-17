#include "Call.h"

namespace Call {

	int _cdecl cdevl(int frst, int secnd, int thr) {

		return frst + secnd + thr;

	}

	int _stdcall cstd(int& frst, int secnd, int thr) {

		return frst * secnd * thr;

	}
	
	int _fastcall cfst(int frst, int secnd, int thr, int fr) {

		return frst + secnd + thr + fr;

	}

}