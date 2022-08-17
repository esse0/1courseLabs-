#pragma once

#include <iostream>
#include <vector>

#define HASHERR0 "Хеш не найден!"
#define HASHERR1 "Out of hash size!"
#define HASHERR2 "Коллизия!"

namespace h {

	int simpleHashFunc(int key, int hashsize);

	int stringHashFunc(std::string key, int hashsize);

	template <typename T>
	struct Hash
	{
	public:

		Hash(int size, int(*hashfunc)(int, int)) : size(size), hashfunc(hashfunc) {
			arr = new T * [size];

			for (int i = 0; i < size; i++) arr[i] = nullptr;
		}

		void push(int rkey, T value)
		{
			int key = hashfunc(rkey, size);

			if (key >= 0 && key < size) {
				if (arr[key] == nullptr) { arr[key] = new T(); *(arr[key]) = value; }
				else throw HASHERR2;
			}
			else throw HASHERR1;
		}

		void pop(int rkey)
		{
			int key = hashfunc(rkey, size);

			if (key >= 0 && key < size) {
				if (arr[key] != 0) arr[key] = nullptr;
				else throw HASHERR0;
			}
			else throw HASHERR1;
		}

		void print()
		{
			for (int i = 0; i < size; i++) {
				if (arr[i] != 0) std::cout << *arr[i] << std::endl;
			}
		}

		T& search(int rkey)
		{
			int key = hashfunc(rkey, size);

			if (key >= 0 && key < size) {
				if (arr[key] != 0) return arr[key];
				else throw HASHERR0;
			}
			else throw HASHERR1;
		}

		int get_now_size()
		{
			int nsize = 0;

			for (int i = 0; i < size; i++) nsize += (arr[i] != nullptr) ? 1 : 0;

			return nsize;
		}

		int get_size()
		{
			return size;
		}

		float get_fill_factor()
		{
			return get_now_size() / (float)size;
		}

	private:

		int (*hashfunc)(int, int);

		T** arr;

		int size;

	};

	template <typename T>
	struct StrHash
	{
	public:

		StrHash(int size, int(*hashfunc)(std::string, int)) : size(size), hashfunc(hashfunc) {
			arr = new T * [size];

			for (int i = 0; i < size; i++) arr[i] = nullptr;
		}

		void push(std::string rkey, T value)
		{
			int key = hashfunc(rkey, size);

			if (key >= 0 && key < size) {
				if (arr[key] == nullptr) { arr[key] = new T(); *(arr[key]) = value; }
				else throw HASHERR2;
			}
			else throw HASHERR1;
		}

		void pop(std::string rkey)
		{
			int key = hashfunc(rkey, size);

			if (key >= 0 && key < size) {
				if (arr[key] != 0) arr[key] = nullptr;
				else throw HASHERR0;
			}
			else throw HASHERR1;
		}

		void print()
		{
			for (int i = 0; i < size; i++) {
				if (arr[i] != 0) std::cout << *arr[i] << std::endl;
			}
		}

		T& search(std::string rkey)
		{
			int key = hashfunc(rkey, size);

			if (key >= 0 && key < size) {
				if (arr[key] != 0) return *arr[key];
				else throw HASHERR0;
			}
			else throw HASHERR1;
		}

		int get_now_size()
		{
			int nsize = 0;

			for (int i = 0; i < size; i++) nsize += (arr[i] != nullptr) ? 1 : 0;

			return nsize;
		}

		int get_size()
		{
			return size;
		}

		float get_fill_factor()
		{
			return get_now_size() / (float)size;
		}

	private:

		int (*hashfunc)(std::string, int);

		T** arr;

		int size;

	};

	template <typename T>
	struct ListHash
	{
	public:

		ListHash(int size, int(*hashfunc)(int, int)) : size(size), hashfunc(hashfunc) {
			list = new std::vector<T>[size];
		}

		void push(int rkey, T value)
		{
			int key = hashfunc(rkey, size);

			if (key >= 0 && key < size) {
				list[key].push_back(value);
			}
			else throw HASHERR1;
		}

		void pop(int rkey)
		{
			int key = hashfunc(rkey, size);

			if (key >= 0 && key < size) {
				if (list[key].size() != 0) list[key].clear();
				else throw HASHERR0;
			}
			else throw HASHERR1;
		}

		std::vector<T>& search(int rkey)
		{
			int key = hashfunc(rkey, size);

			if (key >= 0 && key < size) {
				if (list[key].size() != 0) return list[key];
				else throw HASHERR0;
			}
			else throw HASHERR1;
		}

		int get_now_size()
		{
			int nsize = 0;

			for (int i = 0; i < size; i++) nsize += (list[i].size() != 0) ? 1 : 0;

			return nsize;
		}

		int get_size()
		{
			return size;
		}

		float get_fill_factor()
		{
			return get_now_size() / (float)size;
		}

		std::vector<T>* get_list_pointer() {
			return list;
		}

	private:

		int (*hashfunc)(int, int);

		std::vector<T>* list;

		int size;

	};
}