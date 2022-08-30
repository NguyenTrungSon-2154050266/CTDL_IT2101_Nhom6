#include <iostream>
#include <stdio.h>
using namespace std;

// Cau 3.1
struct Node
{
	int info;
	Node* link;
};
Node* first;

//Cau 3.2
void Init()
{
	first = NULL;
}

//Cau 3.3
void Process_list()
{
	Node* p;
	p = first;
	while (p != NULL)
	{
		cout << p->info << "\t";
		p = p->link;
	}
	cout << endl;
}

// Cau 3.4
Node* Search(int x)
{
	Node* p = first;
	while ((p != NULL) && (p->info != x))
	{
		p = p->link;
	}
	return p;
}

//Cau 3.5
void Insert(int x)
{
	Node* p;
	p = new Node;
	p->info = x;
	p->link = first;
	first = p;
}

//Cau 3.6
int delete_first()
{
	if (first != NULL)
	{
		Node* p = first;
		first = first->link;
		delete p;
		return 1;
	}
	return 0;
}

//Cau 3.7
void Insert_last(int x)
{
	Node* p;
	p = new Node;
	p->info = x;
	p->link = NULL;
	if (first == NULL)
	{
		first = p;
	}
	else
	{
		Node* q = first;
		while (q->link != NULL)
		{
			q = q->link;
		}
		q->link = p;
	}
}
//Cau 3.8
int Delete_last()
{
	if (first != NULL)
	{
		Node* p, * q;
		p = first; q = NULL;
		if (p != NULL)
			while (p->link != NULL)
			{
				q = p; p = p->link;
			}
		if (p != first)
			q->link = NULL;
		else   first = NULL;
		delete p;
		return 1;
	}return 0;
}

//Cau 3.9
int searchandDelete(int x)
{
	if (first != NULL)
	{
		Node* p, * q;
		p = first;
		q = first;
		while (p->info != x && p->link != NULL)
		{
			q = p;
			p = p->link;

		}
		if (p != first && p->link != NULL)
		{
			//ptu giua ds
			if (p->link != NULL)
				q->link = p->link;
			else
				q->link = NULL;
			delete p;
		}
		else if (p == first)
		{
			// ptu dau ds
			first = p->link;
			delete p;
			return 1;
		}
		else if (p->link == NULL && p->info == x)
		{
			//ptu cuoi ds 
			q->link = NULL;
			delete p;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int choice = 0;
	int x, i;
	Node* p;
	system("cls");
	cout << "------------- BT 3, Chuong 2 - DSLK DON  -------------------" << endl;
	cout << "1. Khoi tao DSLK don rong" << endl;
	cout << "2. Them ptu vao dau danh sach" << endl;
	cout << "3. Them ptu vao cuoi danh sach" << endl;
	cout << "4. Xoa ptu o dau danh sach" << endl;
	cout << "5. Xoa ptu o cuoi danh sach" << endl;
	cout << "6. Xuat DSLK don" << endl;
	cout << "7. Tim ptu gia tri x trong DSLK don!!!!" << endl;
	cout << "8. Tim va xoa phan tu gia tri x trong DSLK don" << endl;
	cout << "9. Thoat" << endl;
	do
	{
		cout << "Vui long chon so thuc hien:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			Init();
			cout << "Khoi tao thanh cong" << endl;
			break;
		case 2:
			cout << "Vui long nhap x= ";
			cin >> x;
			Insert(x);
			cout << "DSLK sau khi them dau ds " << x << " la ";
			Process_list();
			break;
		case 3:
			cout << "Vui long nhap x ";
			cin >> x;
			Insert_last(x);
			cout << "DSLK sau khi them dau ds " << x << "la ";
			Process_list();
			break;
		case 4:
			i = delete_first();
			if (i == 0)
				cout << "Xoa khong thanh xong, DS rong !" << endl;
			else
			{
				cout << "Xoa thanh cong ptu dau DS !, DS sau khi xoa la: " << endl;
				Process_list();
			}
			break;
		case 5:
			i = Delete_last();
			if (i == 0)
				cout << "Xoa khong thanh xong, DS rong !" << endl;
			else
			{
				cout << "Xoa thanh cong ptu cuoi DS !, DS sau khi xoa la: " << endl;
				Process_list();
			}
			break;
		case 6:
			cout << "DSLK hien tai la:" << endl;
			Process_list();
			break;
		case 7:
			cout << "Vui long nhap gia tri can tim x= " << endl;
			cin >> x;
			p = Search(x);
			if (p == NULL)
				cout << "Ko tim thay x= " << x << " trong DSLK !!!" << endl;
			else
				cout << "Tim thay x= " << x << " trong DSLK !!!" << endl;
			break;
		case 8:
			cout << "Vui long nhap gia tri can tim x= ";
			cin >> x;
			i = searchandDelete(x);
			if (i == 0)
				cout << "Ko tim thay x=" << x << " trong DSLK !!!" << endl;
			else
			{
				cout << "Tim thay x=" << x << " trong DSLK, va da xoa !!! " << endl;
				cout << "DS sau khi xoa la: " << endl;
				Process_list();
			}
			break;
		case 9:
			cout << "Thoat";
			break;
		default:
			break;
		}
	} while (choice != 9);
	system("pause");
	return 0;
}