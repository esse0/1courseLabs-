#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define HASHERR0 "За границами хэша!";
#define HASHERR1 "Хэш не найден!";
#define HASHERR2 "Не найден конкретный хеш!";

int shash(int number, int size) {
	return abs(number) % size;
}

struct hash_pack
{
	string f;
	string i;
	string o;
	short number;

	hash_pack() : number(0), f(""), i(""), o("") { }

	hash_pack(short number, string f, string i, string o) {
		this->number = number;
		this->f = f;
		this->i = i;
		this->o = o;
	}
};

struct hashtable
{
public:

	hashtable(int size, int (*hashfunc)(int, int)) {
		table = new vector<hash_pack>[size];

		this->size = size;
		this->hashfunc = hashfunc;
	}

	~hashtable() {
		delete[] table;
	}

	void add(hash_pack pack) {
		int key = hashfunc(pack.number, size);

		if (key < 0 || key > size - 1) throw HASHERR0;

		table[key].push_back(pack);
	}

	void remove(hash_pack pack) {
		int key = hashfunc(pack.number, size);

		if (key < 0 || key > size - 1) throw HASHERR0;

		if (table[key].size() == 0) throw HASHERR1;

		bool ishave = false;
		for (int i = 0; i < table[key].size(); i++) {
			if (table[key][i].number == pack.number) {
				table[key].erase(table[key].begin() + i);
				ishave = true;
			}
		}

		if (!ishave) throw HASHERR2;
	}

	vector<hash_pack> get_coll(int key) {
		if (key < 0 || key > size - 1) throw HASHERR0;

		if (table[key].size() == 0) throw HASHERR1;

		return table[key];
	}

	hash_pack search(int number) {
		int key = hashfunc(number, size);

		if (key < 0 || key > size - 1) throw HASHERR0;

		if (table[key].size() == 0) throw HASHERR1;

		for (int i = 0; i < table[key].size(); i++) {
			if (table[key][i].number == number) {
				return table[key][i];
			}
		}

		throw HASHERR2;
	}

	void print() {
		for (int i = 0; i < size; i++)
		{
			cout << "Ключ " << i << endl;
			for (int j = 0; j < table[i].size(); j++)
			{
				cout << "	Collision " << j << endl;
				cout << "		Num = " << table[i][j].number << endl;
				cout << "		F = " << table[i][j].f << endl;
				cout << "		N = " << table[i][j].i << endl;
				cout << "		SN = " << table[i][j].o << endl;
			}
		}
	}

private:

	int size;
	vector<hash_pack>* table;
	int (*hashfunc)(int, int);
};
