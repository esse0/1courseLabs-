#include "stdafx.h"

using namespace std;

namespace Dictionary
{
	Instance Create(const char name[DICTNAMEMAXSIZE], int size)
	{
		if (strlen(name) > DICTNAMEMAXSIZE) throw THROW01;
		if (size > DICTMAXSIZE)			 throw THROW02;

		Instance inst;

		inst.dictionary = nullptr;
		inst.maxsize = size;
		inst.size = 0;

		strncpy_s(inst.name, name, DICTNAMEMAXSIZE);

		return inst;
	}

	void AddEntry(Instance& inst, Entry en)
	{
		if (inst.size + 1 > inst.maxsize)		throw THROW03;

		for (int i = 0; i < inst.size; i++) {
			if (inst.dictionary[i].id == en.id) throw THROW04;
		}

		Entry* oldDic = inst.dictionary; // Оптимизировать алгоритм

		Entry* newDic = new Entry[inst.size + 1];

		for (int i = 0; i < inst.size; i++)
		{
			newDic[i] = oldDic[i];
		}

		newDic[inst.size] = en;

		inst.size++;

		inst.dictionary = newDic;

		if (!(inst.size - 1 == 0)) delete[] oldDic;
	}

	void DelEntry(Instance& inst, int id)
	{
		int realid = GET_REAL_ID(inst, id);

		if (realid == -1)	throw THROW06;

		Entry* oldDic = inst.dictionary;

		Entry* newDic = new Entry[inst.size - 1];

		for (int i = 0; i < realid; i++) newDic[i] = oldDic[i];

		for (int i = realid; i < inst.size - 1; i++) newDic[i] = oldDic[i + 1];

		inst.size--;

		inst.dictionary = newDic;

		delete[] oldDic;
	}

	void UpdEntry(Instance& inst, int id, Entry newEntry)
	{
		for (int i = 0; i < inst.size; i++) {
			if (inst.dictionary[i].id == newEntry.id && id != newEntry.id) throw THROW08;
		}

		int realid = GET_REAL_ID(inst, id);

		if (realid == -1)	throw THROW07;

		inst.dictionary[realid] = newEntry;
	}

	Entry& GetEntry(Instance& inst, int id)
	{
		int realid = GET_REAL_ID(inst, id);

		if (realid == -1)	throw THROW05;

		return inst.dictionary[realid];
	}

	void Print(Instance inst)
	{
		cout << "\n---Dictionary---\n" << " Name: " << inst.name << endl << " Size: " << inst.size << endl << " Max size: " << inst.maxsize << endl;

		if (inst.size == 0) {
			cout << "Dictionary is empty!" << endl;
		}
		else {
			cout << "\nItems - " << endl;

			for (int i = 0; i < inst.size; i++)
			{
				cout << " " << inst.dictionary[i].id << ". " << inst.dictionary[i].name << endl;
			}
		}
	}

	void Delete(Instance& inst)
	{
		delete[] inst.dictionary;

		inst.size = 0;
	}

	int GET_REAL_ID(Instance& inst, int id) {
		int realid = -1;

		for (int i = 0; i < inst.size; i++)
		{
			if (inst.dictionary[i].id == id) {
				realid = i;
				break;
			}
		}

		return realid;
	}

}