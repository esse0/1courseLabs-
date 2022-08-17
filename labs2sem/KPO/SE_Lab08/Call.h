#pragma once
#include <iostream>

namespace Call {

	int _cdecl cdevl(int frst, int secnd, int thr);

	int _stdcall cstd(int& frst, int secnd, int thr);

	int _fastcall cfst(int frst, int secnd, int thr, int fr);

}