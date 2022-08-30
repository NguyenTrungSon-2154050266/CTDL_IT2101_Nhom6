//#include <iostream>
//using namespace std;
//struct Node
//{
//	int info;
//	Node* link;
//};
//
//Node* first1 = NULL;
//Node* first2 = NULL;
//
//void add(int x, Node*& first)
//{
//	Node* a = new Node;
//	a->info = x;
//	a->link = NULL;
//	if (first != NULL)
//	{
//		Node* p = first;
//		while (p->link != NULL)
//			p = p->link;
//		p->link = a;
//	}
//	else
//		first = a;
//}
//
//void Process_list(Node* first)
//{
//	Node* p;
//	p = first;
//	while (p != NULL)
//	{
//		cout << p->info << " ";
//		p = p->link;
//	}
//}
//
//void giao_tap_hop(Node* first1, Node* first2)
//{
//	Node* p1, * p2;
//	p1 = first1;
//	while (p1 != NULL)
//	{
//		p2 = first2;
//		while (p2 != NULL)
//		{
//			if (p1->info == p2->info)
//			{
//				cout << p1->info << " ";
//				break;
//			}
//			p2 = p2->link;
//		}
//		p1 = p1->link;
//	}
//}
//
//void bu_tap_hop(Node* first1, Node* first2)
//{
//	Node* p1, * p2;
//	p1 = first1;
//	bool bu = true;
//	while (p1 != NULL)
//	{
//		p2 = first2;
//		bu = true;
//		while (p2 != NULL)
//		{
//			if (p1->info == p2->info)
//			{
//				bu = false;
//				break;
//			}
//			p2 = p2->link;
//		}
//		if (bu)
//			cout << p1->info << " ";
//		p1 = p1->link;
//
//	}
//	p2 = first2;
//	while (p2 != NULL)
//	{
//		bu = true;
//		p1 = first1;
//		while (p1 != NULL)
//		{
//			if (p1->info != p2->info)
//			{
//				bu = false;
//				break;
//			}
//			p1 = p1->link;
//		}
//		if (bu)
//			cout << p2->info << " ";
//		p2 = p2->link;
//	}
//}
//
//int main()
//{
//	int x, so = 1;
//	cout << "\n---------- MENU ----------";
//	cout << " \n Nhap so 0 de thoat ";
//	cout << " \n Nhap so 1 de them vao day 1 ";
//	cout << " \n Nhap so 2 de them vao day 2 ";
//	cout << " \n Nhap so 3 de xuat day 1 ";
//	cout << " \n Nhap so 4 de xuat day 2 ";
//	cout << " \n Nhap so 5 de xuat giao 2 tap hop ";
//	cout << " \n Nhap so 6 de xuat phan bu cua 2 tap hop ";
//
//	while (so != 0)
//	{
//		cout << "\nChon so tu 0-6: ";
//		cin >> so;
//		switch (so)
//		{
//		case 1:
//			cout << "Nhap x : ";
//			cin >> x;
//			add(x, first1);
//			break;
//		case 2:
//			cout << "Nhap x: ";
//			cin >> x;
//			add(x, first2);
//			break;
//		case 3: 
//			cout << "Danh sach day 1: ";
//			Process_list(first1);
//			break;
//		case 4:
//			cout << "Danh sach day 2: ";
//			Process_list(first2);
//			break;
//		case 5:
//			cout << "Danh sach giao cua tap hop: ";
//			giao_tap_hop(first1, first2);
//			break;
//		case 6:
//			cout << "Danh sach bu cua tap hop: ";
//			bu_tap_hop(first1, first2);
//			break;
//		default:
//			break;
//		}
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}