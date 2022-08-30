////Chuong 5, Bai 6 : DO THI
//#include <stdio.h>
//#include <iostream>
//#include <fstream>
//using namespace std;
//
//#define MAX 20
//int A[MAX][MAX]; // mang 2 chieu
//int n; // so dinh cua do thi
//char vertex[MAX]; //ten dinh
//
///// DSD su dung cho STACK VA QUEUE
//int b[MAX];
//int sp;
//int front, rear;
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
//
//void InitGraph()
//{
//	n = 0;
//}
////6.1 - Nhap MTK bang tay
//void inputGraph()
//{
//	cout << "Nhap so dinh do thi n: ";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Nhap ten dinh: ";
//		cin >> vertex[i];
//		cout << "Nhap vao dong thu " << i + 1 << ": ";
//		for (int j = 0; j < n; j++)
//			cin >> A[i][j];
//	}
//}
//
////Nhap MTK tu file txt
//void inputGraphFromText()
//{
//	string line;
//	ifstream myfile("mtk1.txt");
//	if (myfile.is_open())
//	{
//		myfile >> n;
//		for (int i = 0; i < n; i++)
//			myfile >> vertex[i];
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//				myfile >> A[i][j];
//		}
//		myfile.close();
//		cout << "Doc ma tran ke thanh cong!\n";
//	}
//	else
//		cout << "khong mo duoc file\n";
//}
// 
//// 6.2 - Xuat MTK
//void outputGraph()
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//			cout << A[i][j] << " ";
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
////6.3 - Duyet BFS(QUEUE)
//int C[MAX], bfs[MAX];
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
//	int w, p;
//	PushQ(b, front, rear, v);
//	C[v] = 0;
//	while (front != -1)
//	{
//		PopQ(b, front, rear, p);
//		bfs[nbfs] = p;
//		nbfs++;
//		for (w=0; w<n; w++)
//			if (C[w] && A[p][w] == 1)
//			{
//				PushQ(b, front, rear, w);
//				C[w] = 0;
//			}
//	}
//}
//
////6.4 - Duyet DFS(STACK)
//int dfs[MAX];
//int ndfs = 0;
//void DFS(int s)
//{
//	PushS(b, sp, s);
//	dfs[ndfs] = s;
//	ndfs++;
//	C[s] = 0;
//	int v = -1, u = s;
//	while (isEmptyS(b,sp) == 0)
//	{
//		if (v == n)   //ko còn đỉnh nào kề - đi đến cuối
//			PopS(b, sp, u);  //lấy ra 1 đỉnh
//		for (v = 0; v<n; v++)
//			if (A[u][v] != 0 && C[v] == 1)  //dinh ke va chua xet
//			{
//				PushS(b, sp, u);
//				PushS(b, sp, v);
//				dfs[ndfs] = v;
//				ndfs++;
//				C[v] = 0;
//				u = v;
//				break;
//			}
//	}
//}
//
//// 6.5 Tim su dung DFS
//int Search_by_DFS(int s, int x)
//{
//	PushS(b, sp, s);
//	dfs[ndfs] = s;
//	ndfs++;
//	C[s] = 0;
//	int v = -1, u = s;
//	while (isEmptyS(b, sp) == 0)
//	{
//		if (u == x)
//			return 1;
//		if (v == n)
//			PopS(b, sp, u);
//		for (v = 0; v<n; v++)
//			if (A[u][v] != 0 && C[v] == 1)
//			{
//				PushS(b, sp, u);
//				PushS(b, sp, v);
//				dfs[ndfs] = v;
//				ndfs++;
//				C[v] = 0;
//				u = v;
//				break;
//			}
//	}
//	return 0;
//}
//
//int main()
//{
//	//int a[MAX];
//	//int b[MAX];
//	int choice, sp, i, stt;
//	char x;
//	system("cls");
//	cout << "---------- BAI TAP 6, CHUONG 5 : DO THI ----------" << endl;
//	cout << "1. Khoi tao MA TRAN KE rong" << endl;
//	cout << "2. Nhap MA TRAN KE tu file text" << endl;
//	cout << "3. Nhap MA TRAN KE" << endl;
//	cout << "4. Xuat MA TRAN KE" << endl;
//	cout << "5. Duyet do thi theo chieu rong BFS - DSD" << endl;
//	cout << "6. Duyet do thi theo chieu sau DFS - DSD" << endl;
//	cout << "7. Tim 1 dinh trong do thi theo DFS" << endl; 
//	cout << "8. THOAT" << endl;
//
//	do
//	{
//		cout << "\nVui long chon so de thuc hien: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			InitGraph();
//			cout << "Ban vua khoi tao MA TRAN KE rong thanh cong! \n";
//			break;
//		case 2:
//			inputGraphFromText();
//			cout << "Ban vua nhap MA TRAN KE tu file: \n";
//			outputGraph();
//			break;
//		case 3:
//			inputGraph();
//			break;
//		case 4:
//			outputGraph();
//			break;
//		case 5:
//			InitQUEUE(b, front, rear);
//			InitC();
//			cout << "Vui long nhap dinh xuat phat: ";
//			cin >> x;
//			nbfs = 0;
//			BFS(x);
//			cout << "Thu tu dinh sau khi duyet BFS: \n";
//			output(bfs, n);
//			break;
//		case 6:
//			InitSTACK(b, sp);
//			InitC();
//			cout << "Vui long nhap dinh xuat phat: ";
//			cin >> x;
//			ndfs = 0;
//			DFS(x);
//			cout << "Thu tu dinh sau khi duyet DFS: \n";
//			output(dfs, n);
//			break;
//		case 7:
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
//		case 8:
//			cout << "Goodbyeeeee \n";
//			break;
//		default:
//			break;
//			
//		}
//
//	} while (choice != 8);
//	system("pause");
//	return 0;
//}