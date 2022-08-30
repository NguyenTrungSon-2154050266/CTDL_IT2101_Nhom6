////Chuong 2, Bai 10: STACK voi danh sach lien ket
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
////10.1 - Khai bao cau truc
//struct Node
//{
//	int info;
//	Node* link;
//};
//
//Node* sp; // luu tru dia chi phan tu dau tien cua STACK
//
////10.2 - Khoi tao STACK rong
//void init()
//{
//	sp = NULL;
//}
//
////10.3 - Kiem tra STACK rong
//int isEmpty()
//{
//	if (sp == NULL)
//		return 1;
//	return 0;
//}
//
////10.4 - Them mot phan tu vao STACK
//int Push(int x)
//{
//	Node* p = new Node;
//	p->info = x;
//	p->link = sp;
//	sp = p;
//	return 1;
//}
//
////10.5 - Lay/ xoa mot phan tu trong STACK
//int Pop(int& x)
//{
//	if (sp != NULL)
//	{
//		Node* p = sp;
//		x = p->info;
//		sp = p->link;
//		delete p;
//		return 1;
//	}
//	return 0;
//}
//
////Xuat STACK
//void Process_stack()
//{
//	Node* p = sp;
//	do {
//		cout << p->info << " <-- ";
//		p = p->link;
//	} while (p != NULL);
//	cout << "\n";
//}
//int main()
//{
//	int choice, i, x;
//	bool in = false;
//	system("cls");
//	cout << " ---------- Bai tap 10 - Chuong 2 - STACK voi danh sach lien ket don ----------" << endl;
//	cout << "1. Khoi tao STACK rong " << endl;
//	cout << "2. Kiem tra STACK rong " << endl;
//	cout << "3. Them mot phan tu vao STACK " << endl;
//	cout << "4. Lay/ xoa mot phan tu trong STACK " << endl;
//	cout << "5. Xuat STACK " << endl;
//	cout << "6. Thoat " << endl;
//	do
//	{
//		cout << "Vui long chon so: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			init();
//			in = true;
//			cout << "Khoi tao STACK thanh cong!" << endl;
//			break;
//		case 2:
//			if (in)
//			{
//				i = isEmpty();
//				if (i == 1)
//					cout << "STACK dang rong" << endl;
//				else
//					cout << "STACK khong rong" << endl;
//			}
//			else
//				cout << "Chua khoi tao STACK" << endl;
//			break;
//		case 3:
//			if (in)
//			{
//				cout << "Nhap phan tu can them vao STACK x= ";
//				cin >> x;
//				i = Push(x);
//				if (i == 1)
//				{
//					cout << " Them x= " << x << " vao STACK thanh cong" << endl;
//					cout << "STACK sau khi them la: " << endl;
//					Process_stack();
//				}
//				else
//					cout << "Them khong thanh cong" << endl;
//			}
//			else
//				cout << "Chua khoi dong tao STACK" << endl;
//			break;
//;
//		case 4:
//			if (in)
//			{
//				i = Pop(x);
//				if (i == 1)
//				{
//					cout << "Lay ra khong thanh cong, gia tri lay r la x= " << x << endl;
//					cout << "STACK sau khi lay ra 1 phan tu la: " << endl;
//					Process_stack();
//				}
//				else
//					cout << " Lay ra khong thanh cong! STACK rong" << endl;
//			}
//			else
//				cout << "Chua khoi tao STACK" << endl;
//			break;
//		case 5:
//			Process_stack();
//			break;
//		case 6:
//			cout << "Ket thuc chuong trinh! Goodbye !!!\n";
//			break;
//		default:
//			break;
//		}
//	} while (choice != 7);
//	system("pause");
//	return 0;
//}