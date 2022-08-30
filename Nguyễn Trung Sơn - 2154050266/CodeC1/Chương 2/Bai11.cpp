//Chuong 2, Bai 11 QUEUE voi DS Lien ket don
#include <stdio.h>
#include <iostream>
using namespace std;

//Cau 11.1 Khai bao cau truc QUEUE
struct Node{
	int info;
	Node *link;
};
Node *front, *rear;

//Cau 11.2 Khoi tao QUEUE rong
void init()
{
	front = NULL;
	rear = NULL;
}

//Cau 11.3 Kiem tra QUEUE rong
int isEmpty()
{
	if (front == NULL)
		return 1;
	return 0;
}

//Cau 11.4 Them phan tu vao QUEUE
int Push(int x)
{
	Node *p = new Node;
	p->info = x;
	p->link = NULL;
	if (rear == NULL)
		front = p;
	else
		rear->link = p;
	rear = p;
	return 1;
}

//Cau 11.5 Xoa phan tu trong QUEUE
int Pop(int &x)
{
	if(front != NULL)
	{
		Node *p = front;
		x = p->info;
		front = p->link;
		if (front == NULL)
			rear == NULL;
		delete p;
		return 1;
	}
	return 0;
}
//Xuat QUEUE
void Process_queue()
{
	Node *p = front;
	do{
		cout << p->info << " <-- ";
		p = p->link;
	}while (p != NULL);
	cout <<endl;
}

int main()
{
	int x, choice, i;
	bool in = false;

	system("cls");
	cout << "-------Chuong 2, Bai 11 QUEUE voi DS LK Don-------\n"
		<< "1. Khoi tao QUEUE\n"
		<< "2. Kiem tra QUEUE rong\n"
		<< "3. Them phan tu vao QUEUE\n"
		<< "4. Xoa mot phan tu trong QUEUE\n"
		<< "5. Thoat\n";

	do{
		cout << "Vui long chon (1-5): ";
		cin >> choice;

		switch(choice)
		{
		case 1:
			init();
			cout << "khoi tao QUEUE thanh cong!\n";
			in = true;
			break;
		case 2:
			if(in)
			{
				i = isEmpty();
				if(i == 1)
					cout << "QUEUE dang rong\n";
				else
					cout << "QUEUE khong rong\n";
			}
			else
				cout << "Chua khoi tao QUEUE\n";
			break;
		case 3:
			if (in)
			{
				cout << "Nhap gia tri phan tu them vao QUEUE x = ";
				cin >> x;
				i = Push(x);
				if (i == 1)
				{
					cout << "Them x = " << x << " vao QUEUE thanh cong!\n";
					cout << "QUEUE sau khi them phan tu la: \n";
					Process_queue();
				}
				else
					cout << "Them khong thanh cong!\n";
			}
			else
				cout <<"Chua khoi tao QUEUE\n";
			break;
		case 4:
			i = Pop(x);
			if (i == 1)
			{
				cout << "Lay ra thanh cong, gia tri lay ra x = " << x << endl;
				cout << "QUEUE sau khi lay ra 1 phan tu la: \n";
				Process_queue();
			}
			else
				cout << "Lay ra khong thanh cong!\n";
			break;
		default:
			cout << "Ket thuc chuong trinh! See you soon\n";
		}
	}while (choice >= 0 && choice <= 4);

	system("pause");
	return 0;
}