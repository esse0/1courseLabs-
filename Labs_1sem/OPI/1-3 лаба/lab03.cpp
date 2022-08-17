#include <iostream>
//StadolnikAlexey2003
//Представление в Windows-1251 - 53 74  61 64 6F 6C 6E 69 6B 41 6C 65 78 65 79 32 30 30 33
//в UTF-8 - 53 00 74 00 61 00 64 00 6f 00 6c 00 6e 00 69 00 6b 00 41 00 6c 00 65 00 78 00 65 00 79 00 32 00 30 00 30 00 33 00 00 00
//в UTF-16 -  53 00 74 00 61 00 64 00 6f 00 6c 00 6e 00 69 00 6b 00 41 00 6c 00 65 00 78 00 65 00 79 00 32 00 30 00 30 00 33 00 00 00


//СтадольникАлексей2003
// - D1 F2 E0 E4 EE EB FC ED E8 EA C0 EB E5 EA F1 E5 E9 C2 EB E0 E4 E8 EC E8 F0 EE E2 E8 F7 32 30 30 33
// D0A1 D182 D0B0 D0B4 D0BE D0BB D18C D0BD D0B8 D0BA D090 D0BB D0B5 D0BA D181 D0B5 D0B9
//D0A1 00 D182 00 D0B0 00 D0B4 00 D0BE 00 D0BB 00 D18C 00 D0BD 00 D0B8 00 D0BA 00 D090 00 D0BB 00 D0B5 00 D0BA 00 D181 00 D0B5 00 D0B9

//Стадольник2003Alexey
// - D1 F2 E0 E4 EE EB FC ED E8 EA 32 30 30 33 41 6C 65 78 65 79
// D0A1 D182 D0B0 D0B4 D0BE D0BB D18C D0BD D0B8 D0BA
//53 00 74 00 61 00 64 00 6f 00 6c 00 6e 00 69 00 6b 00 41 00 6c 00 65 00 78 00 65 00 79 00 32 00 30 00 30 00 33 00 00 00


int main()
{
	int number = 0x12345678;
	char hello[] = "Hello, ";
	char lfie[] = "StadolnikAlexey2003";
	char rfie[] = "СтадольникАлексей2003";
	char lr[] = "Стадольник2003Alexey";

	wchar_t Lfie[] = L"StadolnikAlexey2003";
	wchar_t Rfie[] = L"СтадольникАлексей2003";
	wchar_t LR[] = L"Стадольник2003Alexey";

	std::cout << hello << lfie << std::endl;
	return 0;
}