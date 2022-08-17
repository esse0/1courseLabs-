#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

// �������� � �������  ������� ���������� � ����������� ������ ������ � �������  �� �������, �������� ������������������ ������ � ������� � ������������ � ��������� ��
// �������, �������������� � ������������ ������ � 11,
// ������� �� ���, ����� ������� ��������������� ������� ������ ������������ ������.

struct Tree
{
	int key;
	string str;
	struct Tree* left;
	struct Tree* right;
};
Tree* root = NULL;

Tree* CreateTree(Tree* root);
Tree* CreateEl(int k, string str);
Tree* AddEl(Tree* root);
Tree* DeleteEl(Tree* root, int key);
void PrintTree(Tree* root, int depth);
void PrintTree2(Tree* root, int depth);
void DeleteTree(Tree* root);
int chetn(Tree* root, int key);
int isBalanced(Tree* root);
int height(Tree* node);
int maxInt(int a, int b);
int main()
{
	setlocale(LC_ALL, "rus");
	int choice = 0;
	do
	{
		cout << "1 - ���������� ������ ��������\n";
		cout << "2 - �������� ��������\n";
		cout << "3 - ����� ������ � ���������� �������\n";
		cout << "4 - ����� ������ � ��������� �������\n";
		cout << "5 - ���������� ����� � ������� �������\n";
		cout << "6 - �������� �� ������������������\n";
		cout << "7 - ������� ������\n";
		cout << "0 - �����\n";
		cout << "\n����� ��������: "; cin >> choice;

		switch (choice)
		{

		case 1: {
			if (root == NULL)
			root = CreateTree(root);
			else AddEl(root);
			break;
		}

		case 2: {
			int key;
			cout << "���� "; cin >> key;
			DeleteEl(root, key);
			break;
		}

		case 3: {
			PrintTree(root, 0);
			cout << endl << endl;
			break;
		}

		case 4: {
			PrintTree2(root, 0);
			cout << endl << endl;
			break;
		}
		case 6: {
			int r = isBalanced(root->right), l = isBalanced(root->left);
			if (isBalanced(root->right) == 1 || isBalanced(root->left) == 1)
				cout << "\n������  ��������������!\n";
			else
				cout << "\n������ �� ��������������!\n";
		}

		case 7: {
			DeleteTree(root);
			cout << endl << endl;
			root = NULL;
			break;
		}

		case 5: {
			cout << "���������� ����� � ������� ������� " << chetn(root, root->key)-1 << endl;
			break;
		}

		case 0: {
			break;
		}
		}
	} while (choice != 0);

}

Tree* CreateTree(Tree* root)
{
	int key;
	string str;
	if (root == NULL)
	{
		cout << "���� ����� "; cin >> key;
		cout << "������ ����� "; cin >> str;
		root = CreateEl(key, str);
		cout << "\n������ ������ ������!\n\n";
	}
	return root;
}

Tree* CreateEl(int k, string str)
{
	Tree* interm = new Tree[sizeof(Tree)];
	interm->key = k;
	interm->str = str;
	interm->left = interm->right = NULL;
	return interm;
}

Tree* AddEl(Tree* root)
{
	int key; string str;
	cout << "���� �������� "; cin >> key;
	if (key == root->key)
	{
		cout << "���� ������� ���� ����������, �������� ��������!\n";
		cout << "���� �������� "; cin >> key;
	}
	cout << "������ �������� "; cin >> str; cout << endl << "������� ��������!\n";
	Tree* prev = root; // ��-�� ������ "������������ ������������������ ����������"
	while (root)
	{
		prev = root;
		if (key < root->key)
			root = root->left;
		else root = root->right;
	}
	root = CreateEl(key, str);
	if (key < prev->key)
		prev->left = root;
	else
		prev->right = root;
	return root;
}

Tree* DeleteEl(Tree* root, int key)
{
	Tree* d, * prevd, * r, * prevr;
	d = root; prevd = NULL;
	while (d != NULL && d->key != key)
	{
		prevd = d;
		if (d->key > key)
			d = d->left;
		else
			d = d->right;
	}

	if (d == NULL)
	{
		cout << "������� �� ������!";
		return root;
	}

	if (d->right == NULL)
		r = d->left;
	else if (d->left == NULL)
		r = d->right;
	else {
		prevr = d;
		r = d->left;
		while (r->right != NULL)
		{
			prevr = r;
			r = r->right;
		}

		if (prevr == d)
			r->right = d->right;
		else {
			r->right = d->right;
			prevr->right = r->left;
			r->left = prevr;
		}
	}

	if (d == root)
		root = r;
	else {
		if (d->key < prevd->key)
			prevd->left = r;
		else
			prevd->right = r;
	}

	int Dkey = d->key;
	cout << "������ ������� � ������ " << Dkey << "\n";
	d = NULL;
	return root;
}
int how = 0;
void PrintTree(Tree* root, int depth)
{
	if (root)
	{
		// ��������� ����� - ����� ������0
		PrintTree(root->right, depth);
		how++;
		cout << root->key << ' ';
		how++;
		PrintTree(root->left, depth);
		how++;
	}
}

void PrintTree2(Tree* root, int depth)
{
	if (root)
	{
		// ���������� ����� - ������ ����
		PrintTree2(root->left, depth);
		PrintTree2(root->right, depth);
		cout << root->key << ' ';
	}
}

void DeleteTree(Tree* root)
{
	if (root != NULL)
	{
		DeleteTree(root->left);
		DeleteTree(root->right);
		root = NULL;
	}
}

//���������� ����� � ������� �������
int depth = 0;
int chetn(Tree* root, int key)
{
	if (root != NULL)
	{
		
		if (chetn(root->left, key) % 2 == 0 || chetn(root->right, key) % 2 == 0 || root->key % 2 == 0); {
			++depth;
		}
	}
	return depth;
}

int maxInt(int a, int b) {
	return (a >= b) ? a : b;
}

int height(Tree* node)
{
	if (node == NULL)
		return 0;

	return 1 + maxInt(height(node->left), height(node->right));
}

int isBalanced(Tree* root)
{
	int lh;
	int rh;

	if (root == NULL)
		return 1;

	lh = height(root->left);
	rh = height(root->right);

	if (abs(lh - rh) == 0 && isBalanced(root->left) && isBalanced(root->right))
		return 1;

	return 0;
}
