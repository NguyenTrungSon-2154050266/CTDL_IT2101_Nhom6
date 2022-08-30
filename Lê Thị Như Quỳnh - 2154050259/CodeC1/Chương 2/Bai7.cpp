////Chuong 2, Bai 7: QUEUE voi danh sach dac
//#include <iostream>
//#include <stdio.h>
//using namespace std;
////7.1
//#define MAX 100
//
////7.2 - Khoi tao danh QUEUE rong
//void init(int a[], int& front, int& rear)
//{
//	front = -1;
//	rear = -1;
//}
////7.3 - ktra QUEUE rong
//int isEmty(int a[], int front, int rear)
//{
//	if (rear == front)
//		return 1;
//	return 0;
//}
////7.4 - Ktra QUEUE day
//int isFull(int a[], int front, int rear)
//{
//	if ((front == 0 && rear == MAX - 1) || (front - rear == 1))
//		return 1;
//	return 0;
//}
////7.5 - Them phan tu va QUEUE
//int Push(int a[], int& front, int& rear, int x)
//{
//	if (rear - front == MAX - 1)
//		return 0;
//	else
//	{
//		if (front == -1)
//			front = 0;
//		if (rear == MAX - 1)
//		{
//			for (int i = front; i <= rear; i++)
//				a[i - front] = a[i];
//			rear = MAX - 1 - front;
//			front = 0;
//		}
//		a[++rear] = x;
//		return 1;
//	}
//	return 0;
//}
////7.6 - Lay phan tu tu QUEUE
//int Pop(int a[], int& front, int& rear, int &x)
//{
//	if (front == -1)
//		return 0;
//	else
//	{
//		x = a[front++];
//		if (front > rear)
//		{
//			front = -1;
//			rear = -1;
//		}
//		return 1;
//	}
//	return 0;
//}
////Xuat QUEUE
//void Process_QUEUE(int a[], int f, int r)
//{
//	cout << "front=  " << f << "\t rear= " << r << endl;
//	if (f <= r && f != -1)
//	{
//		cout << "<--";
//		for (int i = f; i < r + 1; i++)
//			cout << a[i] << " <-- ";
//		cout << " <-- \n";
//	}
//}
//
//int main()
//{
//	int a[MAX];
//	int choice, f, r, i, x;
//	system("cls");
//	cout << " ---------- Bai tap 7 - Chuong 2 - QUEUE voi DS dac ----------" << endl;
//	cout << "1. Khoi tao QUEUE rong " << endl;
//	cout << "2. Lay them mot phan tu vao QUEUE " << endl;
//	cout << "3. Lay phan tu ra khoi QUEUE " << endl;
//	cout << "4. Kiem tra QUEUE co rong hay khong? " << endl;
//	cout << "5. Kiem tra QUEUE co day hay khong?" << endl;
//	cout << "6. Xuat QUEUE " << endl;
//	cout << "7. Thoat " << endl;
//	do
//	{
//		cout << "Vui long chon so: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			init(a, f,r);
//			cout << "Khoi tao QUEUE thanh cong!" << endl;
//			break;
//		case 2:
//			cout << "Nhap gia tri phan tu can them vao QUEUE x=  ";
//			cin >> x;
//			i = Push(a, f, r,x);
//			if (i == 1)
//			{
//				cout << "Them thanh cong x= " << x << " Vao QUEUE" << endl;
//				cout << "QUEUE sau khi them la: " << endl;
//				Process_QUEUE(a, f,r);
//			}
//			else
//				cout << "Them khong thanh cong" << endl;
//			break;
//		case 3:
//			i = Pop(a, f, r, x);
//			if (i == 1)
//			{
//				cout << "Lay ra khoi QUEUE thanh cong, gia tri lay ra la x= " << x << endl;
//				cout << "QUEUE sau khi lay ra 1 phan tu la: " << endl;
//				Process_QUEUE(a, f, r);
//			}
//			else
//				cout << "Lay ra khong thanh cong" << endl;
//			break;
//		case 4:
//			i = isEmty(a, f ,r);
//			if (i == 1)
//				cout << "QUEUE dang rong !" << endl;
//			else
//				cout << "QUEUE khong rong !" << endl;
//			break;
//		case 5:
//			i = isFull(a, f, r);
//			if (i == 1)
//				cout << "QUEUE dang day !" << endl;
//			else
//				cout << "QUEUE khong day !" << endl;
//			break;
//		case 6:
//			Process_QUEUE(a, f,r);
//			break;
//		case 7:
//			cout << "Goodbye !!!\n";
//			break;
//		default:
//			break;
//		}
//	} while (choice != 7);
//	system("pause");
//	return 0;
//}