////Chuong 5, Bai 7 
//#include <stdio.h>
//#include <iostream>
//#include <fstream>
//#include <sstream>
//using namespace std;
//
//#define MAX 20
//int n;
//char vertex[MAX];
//
//// DSD su dung cho STACK VA QUEUE va DANH SACH KE
//int b[MAX];
//int sp;
//int front, rear;
//
//struct Node
//{
//	int info;
//	Node* link;
//};
//Node* First[MAX];
//
////STACK
//void InitSTACK(int b[], int &sp)
//{
//	sp = -1;
//}
//
//int isEmptyS(int a[], int sp)
//{
//	if (sp == -1)
//		return 1;
//	return 0;
//}
//
//int PushS(int a[], int &sp, int x)
//{
//	if (sp < MAX-1)
//	{
//		a[++sp] = x;
//		return 1;
//	}
//	return 0;
//}
//
//int PopS(int a[], int &sp, int &x)
//{
//	if (sp != -1)
//	{
//		x = a[sp--];
//		return 1;
//	}
//	return 0;
//}
///// end STACK
//
////QUEUE
//void InitQUEUE(int a[], int& front, int &rear)
//{
//	front = - 1;
//	rear = - 1;
//}
//
//int isEmptyQ(int a[], int front, int rear)
//{
//	if (rear == front)
//		return 1;
//	return 0;
//}
//
//int PushQ(int a[], int& front, int &rear, int x)
//{
//	if (rear - front == MAX -1)
//		return 0;
//	else
//	{
//		if (front == -1)
//			front = 0;
//		if (rear == MAX - 1)
//		{
//			for (int i = front; i <= rear; i++)
//				a[i-front] = a[i];
//			rear = MAX-1-front;
//			front = 0;
//		}
//		a[++rear] = x;
//		return 1;
//	}
//}
//
//int PopQ(int a[], int& front, int &rear, int &x)
//{
//	if (front == -1)
//		return 0;
//	else
//	{
//		x = a[front++];
//		if (front > rear)
//		{
//			front = - 1;
//			rear = - 1;
//		}
//		return 1;
//	}
//}
////end QUEUE
//void InitList()
//{
//	for (int i = 0; i < n; i++)
//		First[i] = NULL;
//}
//
//void InsertLast(Node*& first, Node* p)
//{
//	if (first == NULL)
//		first = p;
//	else
//	{
//		Node* q = first;
//		while (q->link != NULL)
//		{
//			q = q->link;
//		}
//		q->link = p;
//	}
//}
//
//// Nhao bang tay DSK
//void inputList()
//{
//	cout << "Nhap so dinh do thi n: ";
//	cin >> n;
//	cout << "Nhap ten dinh: ";
//	for (int i = 0; i < n; i++)
//		cin >> vertex[i];
//	
//	for (int i = 0; i < n +1; i++)
//	{
//		if (i > 0)
//			cout << "Nhap DSK cua dinh thu " << i - 1 << " (" << vertex[i - 1] << "): ";
//		int u;
//		string str;
//		while (getline(cin, str))
//		{
//			istringstream ss(str);
//			while (ss >> u)
//			{
//				Node* p = new Node;
//				p->info = u;
//				p->link = NULL;
//				InsertLast(First[i - 1],p);
//				//cout << u << " - ";
//
//			}
//			//cout <<" i = " << i-1 << endl;
//			break;
//		}
//
//	}
//}
//
//// Nhap DSK tu file txt
//void inputListFromText()
//{
//	string line;
//	ifstream myfile("dsk1.txt");
//	if (myfile.is_open())
//	{
//		myfile >> n;
//		for (int i = 0; i < n; i++)
//			myfile >> vertex[i];
//		string str;
//		int i = 0;
//		while (getline(myfile, str))
//		{
//			istringstream ss(str);
//			int u;
//			while (ss >> u)
//			{
//				//Dinh u
//				Node* p = new Node;
//				p->info = u;
//				p->link = NULL;
//				InsertLast(First[i - 1], p);
//			}
//			i++;
//		}
//	}
//}
//
////Xuat DSK
//void outputList()
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Dinh " << i << " (" << vertex[i] << ") ke voi dinh: ";
//		Node* p = First[i];
//		while (p != NULL)
//		{
//			cout << p->info << " ";
//			p = p->link;
//		}
//		cout << endl;
//	}
//}
//
//void output(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//		cout << vertex[a[i]] << " ";
//}
//
////Duyet BFS
//int C[100], bfs[100];
//int nbfs = 0;
//void InitC()
//{
//	for (int i = 0; i < n; i++) // n la so dinh cua do thi
//		C[i] = 1;
//
//}
//
//void BFS(int v)// v la dinh bat dau
//{
//	int p;
//	Node* w;
//	PushQ(b, front, rear, v);
//	C[v] = 0;
//	while (front != -1)
//	{
//		PopQ(b, front, rear, p);
//		bfs[nbfs] = p;
//		nbfs++;
//		w = First[p];
//		while (w != NULL)
//		{
//			if (C[w->info])
//			{
//				PushQ(b, front, rear, w->info);
//				C[w->info] = 0;
//
//
//			}
//			w = w->link;
//		}
//	}
//}
//
////DFS
//int dfs[100];
//int ndfs = 0;
//void DFS(int s)
//{
//	PushS(b, sp, s);
//	dfs[ndfs] = s;
//	ndfs++;
//	C[s] = 0;
//	int u = s;
//	Node* v = NULL;
//	while (isEmptyS(b, sp) == 0)
//	{
//		if (v == NULL)
//			PopS(b, sp, u);
//		v = First[u];
//		while (v != NULL)
//		{
//			if (C[v->info] == 1)
//			{
//				PushS(b, sp, u);
//				PushS(b, sp, v->info);
//				dfs[ndfs] = v->info;
//				ndfs++;
//				C[v->info] = 0;
//				u = v->info;
//				break;
//			}
//			v = v->link;
//		}
//	}
//
//}
////Tim su dung DFS
//int Search_by_DFS(int s, int x)
//{
//	PushS(b, sp, s);
//	dfs[ndfs] = s;
//	ndfs++;
//	C[s] = 0;
//	int u = s;
//	Node* v = NULL;
//	while (isEmptyS(b, sp) == 0)
//	{
//		if (u == x)
//			return 1;
//		if (v == NULL)
//			PopS(b, sp, u);
//		v = First[u];
//		while (v != NULL)
//		{
//			if (C[v->info] == 1)
//			{
//				PushS(b, sp, u);
//				PushS(b, sp, v->info);
//				dfs[ndfs] = v->info;
//				ndfs++;
//				C[v->info] = 0;
//				u = v->info;
//				break;
//			}
//			v = v->link;
//		}
//	}
//	return 0;
//
//}
//
//int main()
//{
//	int choice, stt, i;
//	char x;
//	system("cls");
//	cout << "---------- BAI TAP 7, CHUONG 5 : DO THI ----------" << endl;
//	cout << "1. Khoi tao DANH SACH KE rong" << endl;
//	cout << "2. Nhap DANH SACH KE tu file text" << endl;
//	cout << "3. Nhap DANH SACH KE" << endl;
//	cout << "4. Xuat DANH SACH KE" << endl;
//	cout << "5. Duyet do thi theo chieu rong BFS - DSLK" << endl;
//	cout << "6. Duyet do thi theo chieu sau DFS - DSLK" << endl;
//	cout << "7. Tim dinh co gia tri x theo BFS" << endl;
//	cout << "8. THOAT" << endl;
//
//	do
//	{
//		cout << "\nVui long chon so de thuc hien: ";
//		cin >> choice;
//		switch (choice)
//		{
//		 case 1:
//			 InitList();
//			 cout << "Ban vua khoi tao DANH SACH KE rong thanh cong! \n";
//			 break;
//		 case 2:
//			 inputListFromText();
//			 cout << "Ban vua nhap DANH SACH KE tu file: \n";
//			 outputList();
//			 break;
//		 case 3:
//			 inputList();
//			break;
//		 case 4:
//			outputList();
//			 break;
//		 case 5:
//			 InitQUEUE(b, front, rear);
//			 InitC();
//			 cout << "Vui long nhap dinh xuat phat: ";
//			 cin >> x;
//			 nbfs = 0;
//			 BFS(x);
//			 cout << "Thu tu dinh sau khi duyet BFS: \n";
//			 output(bfs, n);
//			 break;
//		 case 6:
//			 InitSTACK(b, sp);
//			 InitC();
//			 cout << "Vui long nhap dinh xuat phat: ";
//			 cin >> x;
//			 ndfs = 0;
//			 DFS(x);
//			 cout << "Thu tu dinh sau khi duyet DFS: \n";
//			 output(dfs, n);
//			 break;
//		 case 7:
//			InitSTACK(b, sp);
//			InitC();
//			ndfs = 0;
//			cout << "Vui long nhap TEN dinh can tim: ";
//			cin >> x;
//			stt = int(x) - 65;
//			if (Search_by_DFS(0, stt))
//				cout << x << " co trong do thi.\n";
//			else
//				cout << "Khong tim thay " << x << " trong do thi.\n";
//			break;
//			 break;
//		 case 8:
//			 cout << "Goodbyeeeee \n";
//			 break;
//		default:
//			 break;
//		}
//	} while (choice != 8);
//	system("pause");
//	return 0;
//}