#include <iostream>

using namespace std;

int Foo(int a)
{
	return a + 4;
}
int F(int a) {
	return a + 5;
}

int main() {
	int X = 9 + 14, Y = 10 + 14, Z = 11 + 14;
	float S = 1.0 + 14; double d = 123123123123.123123123123;

	bool bl1 = true;// 01
	bool bl2 = false;// 00
	char letr1 = 't';// ascii
	char letr2 = 'т';// windows 1251
	wchar_t letr3 = 'S';// UTF-16
	wchar_t letr4 = L'С';// UTF-16
	short x1 = X; // 17
	short x2 = -X; //-17

	short min = 0x8000; //-32 768
	short max = 0x7FFF; //32 767
	
	unsigned short min2 = 0x0000; // 0
	unsigned short max2 = 0xFFFF; //65 535

	int y1 = Y;// 18
	int y2 = -Y;// -18

	int min3 = 0x80000000;//-2 147 483 648
	int max3 = 0x7FFFFFFF;//2 147 483 647

	unsigned int min4 = 0x0000;//0
	unsigned int max4 = 0xFFFFFFFF; //4 294 967 295

	long z1 = Z;//19
	long z2 = -Z;//-19

	long min5 = 0x80000000;//-2 147 483 648
	long max5 = 0x7FFFFFFF;//2 147 483 647

	unsigned long min6 = 0x0000;//0
	unsigned long max6 = 0xFFFFFFFF;//4 294 967 295

	float s1 = S;// F
	float s2 = -S;//-F

	float inf1 = INFINITY;
	float inf2 = -INFINITY;
	float ind = INFINITY / INFINITY;

	char* p_chr = &letr1;
	wchar_t* p_wchr = &letr3;
	short* p_x1 = &x1;
	int* p_y1 = &y1;
	float* p_s1 = &s1;
	double* p_d = &d;

	int(*pFoo)(int a);
	pFoo = Foo;
	cout << pFoo(5) << endl;
	pFoo = F;
	cout << pFoo(5);
}