#pragma once

#include <cstring>

#define DICTNAMEMAXSIZE 20 // максимальный размер имени словаря
#define DICTMAXSIZE 100 // максимальная емкость словаря
#define ENTRYNAMEMAXSIZE 30 // максимальная длина имени в словаре

#define THROW01 "Create: превышен размер имени словаря"
#define THROW02 "Create: превышен размер максимальной ёмкости словаря"
#define THROW03 "AddEntry: переполенине словаря"
#define THROW04 "AddEntry: дублирование идентификатора"
#define THROW05 "GetEntry: не найден элемент"
#define THROW06	"DelEntry: не найден элемент"
#define THROW07 "UpdEntry: не найден элемент"
#define THROW08 "UpdEntry: дублирование идентификатора"

namespace Dictionary
{
	struct Entry { // Элемент словаря
		int id;   // Идентификатор (уникальный)
		char name[ENTRYNAMEMAXSIZE]; // Символьная информация
	};

	struct Instance { // Экземпляр словаря
		char name[DICTNAMEMAXSIZE]; // Наименование словаря
		int maxsize; // Максимальная емкость словаря
		int size; // Текущий размер словаря < DICTNAMEMAXSIZE
		Entry* dictionary; // Массив элементов словаря
	};

	Instance Create( // Создать словарь
		const char name[DICTNAMEMAXSIZE], // имя словаря
		int size // Емкость словаря < DICTNAMEMAXSIZE
	);

	void AddEntry( // Добавить элемент словаря
		Instance& inst, // Экземпляр словаря
		Entry ed // Элемент словаря
	);

	void DelEntry( // Удалить элемент словаря
		Instance& inst, // Экземпляр словаря
		int id // Идентификатор удаляемого элемента (уникальный)
	);

	void UpdEntry( // Изменить элемент словаря
		Instance& inst, // Экземпляр словаря
		int id, // Идентификатор изменяемого элемента 
		Entry new_ed // Новый элемент словаря
	);

	Entry& GetEntry( // Получить элемент словаря
		Instance& inst, // Экземпляр словаря
		int id // Идентификатор получаемого элемента 
	);

	void Print(Instance d); // Печать словаря
	void Delete(Instance& d); // Удалить словарь
	int GET_REAL_ID(Instance& inst, int id);
}