#include "MyHash.h"

#include <iostream>

namespace h {
	int simpleHashFunc(int key, int hashsize)
	{
		return key % hashsize;
	}

	int stringHashFunc(std::string strkey, int hashsize)
	{
		int a = 0;

		for (int i = 0; i < strkey.length(); i++) a += strkey[i];

		return a % hashsize;
	}
}