//// CHUONG 2, BAI 12 DSLK DOI
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
////khai bao cau truc danh sach
//struct Node {
//	int info;
//	Node *previous, *next;
//};
//Node *first, *last;
//
////Khoi tao danh sach rong
//void Init()
//{
//	first = NULL;
//	last = NULL;
//}
//
////Xuat danh sach
//void Process_list()
//{
//	Node *p = first;
//	while (p != NULL)
//	{
//		cout << p->info << "\t";
//		p = p->next;
//	}
//	cout << endl;
//}
//
////tim phan tu trong danh sach
//Node *Search(int x)
//{
//	Node *p = first;
//	while ((p != NULL) && (p->info != x))
//		p = p->next;
//	return p;
//}
//
////Them dau danh sach
//void Insert_first(int x)
//{
//	Node *p = new Node;
//	p->info = x;
//	p->next = first;
//	p->previous = NULL;
//	if (first != NULL)
//		first->previous = p;
//	else
//		last = p;
//	first = p;
//}
//
////Xoa dau danh sach
//int Delete_first()
//{
//	if (first != NULL)
//	{
//		Node *p = first;
//		first = first->next;
//		delete p;
//		if (first != NULL)
//			first->previous = NULL;
//		else
//			last = NULL;
//		return 1;
//	}
//	return 0;
//}
////Them cuoi danh sach
//void Insert_last(int x)
//{
//	Node *p = new Node;
//	p->info = x;
//	p->next = NULL;
//	if (last != NULL)
//		last->next = p;
//	else
//		first = p;
//	last = p;
//}
////Xoa cuoi danh sach
//int Delete_last()
//{
//	if (last != NULL)
//	{
//		Node *p = last;
//		last = last->previous;
//		if (last != NULL)
//			last->next = NULL;
//		else
//			first = NULL;
//		delete p;
//		return 1;
//	}
//	return 0;
//}
////Tim va xoa phan tu
//int Search_delete(int x)
//{
//	if (first != NULL)
//	{
//		Node *p, *q;
//		p = first;
//		q = first;
//		while ((p->info != x) && (p->next != NULL))
//		{
//			q = p;
//			p = p->next;
//		}
//		if ( p != first && p->next != NULL)
//		{
//			//ptu giua ds
//			q->next = p->next;
//			delete p;
//			return 1;
//		}
//		else if (p == first)
//		{
//			//pt dau ds
//			first = p->next;
//			delete p;
//			return 1;
//		}else if (p->info == x && p->next == NULL)
//		{
//			//ptu cuoi ds
//			q->next = NULL;
//			delete p;
//			return 1;
//		}
//	}
//	return 0;
//}
////Tim va them phan tu
//Node* CreateNode(int x)
//{
//	Node* p = new Node;
//	p->info = x;
//	p->next = NULL;
//	p->previous = NULL;
//	return p;
//}
// 
//int Search_Insert(int x, int y)
//{
//	Node* p, *q;
//	p = first;
//	q = first;
//	if (first != NULL)
//	{
//		while (p->info != x && p != NULL)
//		{
//			q = p;
//			p = p->next;
//		}
//		if (p != NULL)
//		{
//			Node* k = CreateNode(y);
//			if (p->previous == NULL)
//			{
//				p->previous = k;
//			    k->next = p;
//			    first = k;
//			    return 1;
//		    }
//		    else
//		    {
//				q->next = k;
//				k->previous = p->previous;
//			    p->previous = k;
//				k->next = p;
//			    return 1;
//		    }
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int x, y, i, choice;
//	bool in = false;
//	Node *s;
//
//	Init();
//	system("cls");
//	cout<< "-------Chuong 2, Bai 12 DSLK Doi-------\n"
//		<< "1. Khoi tao DS LKDoi \n"
//		<< "2. Them phan tu vao dau danh sach\n"
//		<< "3. Them phan tu vao cuoi danh sach\n"
//		<< "4. Xuat cac phan tu trong danh sach\n"
//		<< "5. Tim mot phan tu trong danh sach\n"
//		<< "6. Xoa mot phan tu dau danh sach\n"
//		<< "7. Xoa mot phan tu cuoi danh sach\n"
//		<< "8. Tim va xoa mot phan tu trong danh sach\n"
//		<< "9. Tim va them mot phan tu truoc phan tu tim thay\n"
//		<< "10. Thoat\n";
//
//	do {
//		cout << "\nVui long nhap so de thuc hien: ";
//		cin >> choice;
//
//		switch(choice)
//		{
//		case 1:
//			Init();
//			cout << "Khoi tao danh sach thanh cong!\n";
//			in = true;
//			break;
//		case 2:
//			if (in)
//			{
//			    cout << "Nhap gia tri muon them vao dau danh sach: ";
//				cin >> x;
//				Insert_first(x);
//			    cout << "Them phan tu thanh cong. Chon xuat de xem danh sach\n";
//			}
//			else
//				cout << "Chua khoi tao danh sach\n";
//			break;
//		case 3:
//			if (in)
//			{
//				cout << "Nhap gia tri muon them vao cuoi danh sach: ";
//				cin >> x;
//				Insert_last(x);
//				cout << "Them phan tu thanh cong!\n";
//			}
//			else
//				cout << "Chua khoi tao danh sach\n";
//			break;
//		case 4:
//			cout << "Danh sach LKDoi hien tai la: \n";
//			Process_list();
//			break;
//		case 5:
//			cout << "Vui long nhap gia tri can tim x = ";
//			cin >> x;
//			s = Search(x);
//			if (s != NULL)
//				cout << "Tim thay phan tu co gia tri " << x << " trong ds" << endl;
//			else 
//				cout << "Khong tim thay phan tu co gia tri " << x << " trong ds" << endl;
//			break;
//		case 6:
//			i = Delete_first();
//			if (i != 0)
//			{
//				cout << "Da xoa thanh cong! Danh sach sau xoa la: \n";
//				Process_list();
//			}
//			else
//				cout << "Xoa khong thanh cong! danh sach rong\n";
//			break;
//		case 7:
//			i = Delete_last();
//			if (i == 1)
//			{
//				cout << "Da xoa thanh cong! Danh sach sau xoa la: \n";
//				Process_list();
//			}
//			else
//				cout << "Xoa khong thanh cong! danh sach rong\n";
//			break;
//		case 8:
//			cout << "Vui long nhap gia tri can xoa x = ";
//			cin >> x;
//			i = Search_delete(x);
//			if (i == 1)
//			{
//				cout << "Xoa thanh cong gia tri " << x << " trong danh sach. Danh sach sau khi xoa la: \n";
//				Process_list();
//			}
//			else 
//				cout << "Xoa khong thanh cong!\n";
//			break;
//		case 9:
//			cout << "Vui long nhap gia tri can tim x = ";
//			cin >> x;
//			cout << "Nhap gia tri phan tu them vao truoc " << x << " :";
//			cin >> y;
//			if (Search_Insert(x, y) == 1)
//			{
//			    cout << "Danh sach sau khi them phan tu dung truoc " << x << endl;
//			    Process_list();
//			}
//			else
//				cout << "Them khong thanh cong\n";
//			break;
//		default:
//			cout << "Ket thuc chuong trinh! See you soon.\n";
//			break;
//		}
//
//	}while (choice >= 1 && choice <= 9);
//
//
//	system("pause");
//	return 0;
//}
