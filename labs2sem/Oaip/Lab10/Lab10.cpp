#include "Header.h"
#include <fstream>
using namespace std;
struct NodeTree
{
	int  key;
};
//-------------------------------
int CountTree(btree::Node* t)
{
	int count = 0;
	if (t == nullptr)
	{
		return count;
	}
	count += 1;
	count += CountTree(t->left);
	count += CountTree(t->right);
	return count;
}

bool IsBalancedTree(btree::Node* t)
{
	int leftNodesCount = 0;
	int rightNodesCount = 0;
	if (t != nullptr)
	{
		leftNodesCount = CountTree(t->left);
		rightNodesCount = CountTree(t->right);
	}
	int delta = abs(leftNodesCount - rightNodesCount);
	return delta > 1 ? false : true;
}



btree::CMP cmpfnc(void* x, void* y) // Сравнение
{
	btree::CMP rc = btree::EQUAL;
	if (((NodeTree*)x)->key < ((NodeTree*)y)->key)
		rc = btree::LESS;
	else
		if (((NodeTree*)x)->key > ((NodeTree*)y)->key)
			rc = btree::GREAT;
	return rc;
}
//-------------------------------
void printNode(void* x) // Вывод при обходе
{
	cout << ((NodeTree*)x)->key << ends;
}
//-------------------------------
bool buildTree(const char* FileName, btree::Object& tree) // Построение дерева из файла
{
	bool rc = true;
	FILE* inFile;
	fopen_s(&inFile, FileName, "r");
	if (inFile == NULL)
	{
		cout << "Ошибка открытия входного файла" << endl;
		rc = false; return rc;
	}
	while (!feof(inFile)) // заполнение дерева 
	{
		int num;
		fscanf_s(inFile, "%d", &num, 1);
		NodeTree* a = new NodeTree();
		a->key = num;
		tree.insert(a);
	}
	fclose(inFile);
	return rc;
}
FILE* outFile;
//-------------------------------
void saveToFile(void* x) // Запись одного элемента в файл
{
	NodeTree* a = (NodeTree*)x;
	int q = a->key;
	fprintf(outFile, "%d\n", q);
}
//-------------------------------
void saveTree(btree::Object& tree, const char* FileName) // Сохранение дерева в файл 
{
	fopen_s(&outFile, FileName, "w");
	if (outFile == NULL)
	{
		cout << "Ошибка открытия выходного файла" << endl;
		return;
	}
	tree.Root->scanDown(saveToFile);
	fclose(outFile);
}
//-------------------------------
void treePrint(btree::Node* tree)
{
	if (tree != NULL) // Пока не встретится пустой узел
	{
		cout << " " << *(int*)tree->data << " "; // Отображаем корень дерева
		treePrint(tree->left); // Рекурсивная функция для левого поддерева
		treePrint(tree->right); // Рекурсивная функция для правого поддерева
	}
}
//-------------------------------
void treeprint(btree::Node* tree, int& a)
{
	if (tree != NULL) // Пока не встретится пустой узел
	{
		treeprint(tree->left, a); // Рекурсивная функция для левого поддерева
		cout << *(int*)tree->data << " "; // Отображаем корень дерева
		treeprint(tree->right, a); // Рекурсивная функция для правого поддерева
	}
	else
		a++;
}
int main()
{
	setlocale(0, "Ru");
	btree::Object demoTree = btree::create(cmpfnc);
	int n = 0;
	int k, choice;
	NodeTree a1 = { 1 }, a2 = { 2 }, a3 = { 3 }, a4 = { 4 }, a5 = { 5 }, a6 = { 6 };
	bool rc = demoTree.insert(&a4); //          4
	rc = demoTree.insert(&a1);     //   1
	rc = demoTree.insert(&a6);    //                   6
	rc = demoTree.insert(&a2);   //      2
	rc = demoTree.insert(&a3);  //         3
	rc = demoTree.insert(&a5); //                     5
	for (;;)
	{
		NodeTree* a = new NodeTree;
		cout << "1 - вывод дерева на экран" << endl;
		cout << "2 - добавление элемента" << endl;
		cout << "3 - удаление элемента" << endl;
		cout << "4 - сохранить в файл" << endl;
		cout << "5 - загрузить из файла" << endl;
		cout << "6 - очистить дерево" << endl;
		cout << "7 - Проверка на баланс" << endl;
		cout << "0 - выход" << endl;
		cout << "сделайте выбор" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0: exit(0);
		case 1: {
			if (demoTree.Root)
				demoTree.Root->scanByLevel(printNode);
			else
				cout << "Дерево пустое" << endl;
			puts("Нисходящий обход: ");
			treePrint(demoTree.Root);
			cout << endl;
			puts("Смешанный обход: ");
			treeprint(demoTree.Root, n);
			cout << "\nКоличество листьев = " << (n / 2) - 1 << endl;
			n = 0;
			break;
		}
		case 2: {
			cout << "введите ключ" << endl;
			cin >> k;
			a->key = k;
			demoTree.insert(a);
			break;
		}
		case 3: {
			cout << "введите ключ" << endl;
			cin >> k;
			a->key = k;
			demoTree.deleteByData(a);
			break;
		}
		case 4: saveTree(demoTree, "G.txt");
			break;
		case 5: buildTree("G.txt", demoTree);
			break;
		case 6: {
			while (demoTree.Root)
				demoTree.deleteByNode(demoTree.Root);
			break;
		}
		case 7:{
			if (IsBalancedTree(demoTree.Root)) cout << "Сбалансированно" << endl;
			else cout << "Не сбалансированно" << endl;
			break;
		}
		}
	}
	system("pause");
	return 0;
}
