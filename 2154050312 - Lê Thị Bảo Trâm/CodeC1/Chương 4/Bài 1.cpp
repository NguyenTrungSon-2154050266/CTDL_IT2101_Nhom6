#include <iostream>
#include <stdio.h>
using namespace std;
constexpr auto COUNT= 10;
//Cau 1.1
struct Node
{
	int info;
	Node* left;
	Node* right;
};
Node* root;
// cau 1.2
void init()
{
	root = NULL;

}
//cau 1.3
int Insert_Node_Recursive(int x, Node* q)
{
	if (q->info == x)
	{
		return 0;
	}
	else if (q->info > x)
	{
		if (q->left == NULL)
		{
			Node* p = new Node;
			p->info = x;
			p->left = NULL;
			p->right = NULL;
			q->left = p;
			return 1;
		}
		else
			return Insert_Node_Recursive(x, q->left);
	}
	else
		if (q->right == NULL)
		{
			Node* p = new Node;
			p->info = x;
			p->left = NULL;
			p->right = NULL;
			q->right = p;
			return 1;
		}
		else
			return Insert_Node_Recursive(x, q->right);
}
void InsertNode(Node*& p, int x)
{
	if (p == NULL)
	{
		p = new Node;
		p->info = x;
		p->left = NULL;
		p->right = NULL;
	}
	else
	{
		if (p->info == x)
			return;
		else if (p->info > x)
			return InsertNode(p->left, x);
		else
			return InsertNode(p->right, x);
	}
}
//1.4
Node* Search(Node* p, int x)
{
	if (p != NULL)
	{
		if (p->info == x)
			return p;
		else
		{
			if (x > p->info)
				return Search(p->right, x);
			else
				return Search(p->left, x);

		}
	}
	return NULL;
}
//1.5
void SearchStandFor(Node*& p, Node*& q)
{
	if (q->left == NULL)
	{
		p->info = q->info;
		p = q;
		q = q->right;
	}
	else
		SearchStandFor(p, q->left);
}
int Delete(Node*& T, int x)
{
	if (T == NULL)
		return 0;
	if (T->info == x)
	{
		Node* p = T;
		if (T->left == NULL)
			T = T->right;
		else if (T->right == NULL)
			T = T->left;
		else
			SearchStandFor(p, T->left);
		delete p;
		return 1;
	}
	if (T->info < x)
		return Delete(T->right, x);
	if (T->info > x)
		return Delete(T->left, x);
}
// 1.6
void DuyetLNR(Node* p)
{
	if (p != NULL)
	{
		DuyetLNR(p->left);
		cout << p->info << " ";
		DuyetLNR(p->right);
	}
}
//1.7
void DuyetNLR(Node* p)
{
	if (p != NULL)
	{
		cout << p->info << " ";
		DuyetLNR(p->left);
		DuyetLNR(p->right);
	}
}
//1.8
void DuyetLRN(Node* p)
{
	if (p != NULL)
	{
		DuyetLNR(p->left);
		DuyetLNR(p->right);
		cout << p->info << " ";
	}
}
void print20DUtil(Node* p, int space)
{
	if (p == NULL)
		return;
	space += COUNT;
	print20DUtil(p->right, space);
	cout << endl;
	for (int i = COUNT; i < space; i++)
		cout << " ";
	cout << p->info << endl;
	print20DUtil(p->left, space);
}
void Process_Tree()
{
	print20DUtil(root, 0);
}
int main()
{
	int choice = 0;
	int x, i;
	Node* p;
	system("cls");
	cout << "1.Khoi tao cay." << endl;
	cout << "2.Them vao cay." << endl;
	cout << "3.Tim so nguyen trong cay." << endl;
	cout << "4.Xoa so nguyen trong cay." << endl;
	cout << "5.Duyet cay theo LNR." << endl;
	cout << "6.Duyet cay theo NLR." << endl;
	cout << "7.Duyet cay theo LRN." << endl;
	cout << "8.In ra cay." << endl;
	cout << "9.Thoat chuong trinh." << endl;
	do
	{
		cout << "Vui long chon chuc nang: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			init();
			cout << "Ban vua khoi tao cay thanh cong!\n";
			break;
		case 2:
			cout << "Vui long nhap gia tri x can them: ";
			cin >> x;
			InsertNode(root, x);
			cout << "Cay sau khi them la: ";
			Process_Tree();
			break;
		case 3:
			cout << "Vui long nhap gia tri x can tim: ";
			cin >> x;
			p = Search(root, x);
			if (p != NULL)
				cout << "Tim thay gia tri " << x << " trong cay!\n";
			else
				cout << "Khong tim thay gia tri " << x << " trong cay!\n";
			break;
		case 4:
			cout << "Vui long nhap gia tri can xoa: ";
			cin >> x;
			i = Delete(root, x);
			if (i == 0)
				cout << "Khong tim thay x = " << x << " trong cay!\n";
			else
			{
				cout << "Xoa thanh cong gia tri x= " << x << " trong cay!\n";
				cout << "Cay sau khi xoa la: ";
				Process_Tree();
			}
			break;
		case 5:
			cout << "Cay duyet theo LNR la: ";
			DuyetLNR(root);
			break;
		case 6:
			cout << "Cay duyet theo LNR la: ";
			DuyetNLR(root);
			break;
		case 7:
			cout << "Cay duyet theo LRN la: ";
			DuyetLRN(root);
			break;
		case 8:
			cout << "Cay nhu sau: ";
			Process_Tree();
		case 9:
			cout << "Thoat chuong trinh! " << endl;
			break;
		default:
			break;
		}
	} while (choice != 9);
	system("pause");
	return 0;
}
