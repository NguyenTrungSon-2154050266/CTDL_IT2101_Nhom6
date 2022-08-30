////Chuong 2, Bai 6 Doi Thap phan sang Nhi phan
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//#define MAX 100
//
////Khoi tao stack rong
//void  init(int a[], int &sp)
//{
//	 sp = -1;
//}
//
//// Kiem tra satck rong
//int isEmpty(int a[], int sp)
//{
//	if (sp == -1)
//		return 1;
//	return 0;
//}
//
//// Kiem tra stack day
//int isFull(int a[], int sp)
//{
//	if (sp == MAX -1)
//		return 1;
//	return 0;
//}
//
////them mot phan tu vao stack
//int Push(int a[], int &sp, int x)
//{
//	if (sp < MAX-1)
//	{
//		a[++sp] = x;
//		return 1;
//	}
//	return 0;
//}
//
//// xoa/lay mot phan tu trong stack
//int Pop(int a[], int &sp, int &x)
//{
//	if (sp != -1)
//	{
//		x = a[sp--]; //x gan = a[sp] sau do giam sp
//		return 1;
//	}
//	return 0;
//}
//
//// Xuat Stack
//void Process_stack(int a[], int sp)
//{
//	for (int i=0; i < sp + 1; i++)
//		cout << a[i] << "<--";
//	cout << endl;
//}
//
////chuyen he thap phan sang nhi phan
//int convertDectoBi(int a[], int &sp, int tp)
//{
//	init(a, sp);
//	while (tp != 0)
//	{
//		int du = tp % 2;
//		if (!Push(a, sp, du))
//			return INT_MIN;
//		tp /= 2;   
//	}
//	int np = 0;
//	while (!isEmpty(a, sp))
//	{
//		int so;
//		if (!Pop(a, sp, so))
//			return INT_MIN;
//		np = np * 10 + so;
//	}
//	return np;
//}
//
//int main()
//{
//	int a[MAX];
//	int sp;
//	int choice, x, i, in = 0, np;
//	system("cls");
//	cout << "-------Chuong 2 - Bai 6-------\n"
//		<< "1. Khoi tao stack rong\n"
//		<< "2. Them phan tu vao stack\n"
//		<< "3. Lay phan tu ra khoi stack\n"
//		<< "4. Kiem tra stack co day hay khong\n"
//		<< "5. Kiem tra stack co rong hay khong\n"
//		<< "6. Xuat STACK\n"
//		<< "7. Dung STACK chuyen he THAP PHAN sang he NHI PHAN\n"
//		<< "8. Thoat\n";
//	do{
//		cout << "Vui long chon (1-8) ";
//		cin >> choice;
//		switch(choice)
//		{
//		case 1:
//			init(a, sp);
//			in = 1;
//			cout << "Khoi tao stack thanh cong\n";
//			break;
//		case 2:
//			if (in)
//			{
//				cout << "Nhap phan tu can them vao stack x = ";
//				cin >> x;
//				i = Push(a, sp, x);
//				if (i == 1)
//					cout << "Them vao stack thanh cong\n";
//				else
//					cout << "Them vao stack khong thanh cong\n";
//			}
//			else
//				cout << "vui long chon khoi tao stack\n";
//			break;
//		case 3:
//			if (in)
//			{
//				i = Pop(a, sp, x);
//				if (i == 1)
//				{
//					cout << "Phan tu vua lay ra khoi stack la: " << x << endl;
//					cout << "STACK sau khi lay ra 1 phan tu la: \n";
//					Process_stack(a, sp);
//				}
//				else
//					cout <<"Lay ra khong thanh cong\n";
//			}
//			else
//				cout << "vui long chon khoi tao stack\n";
//			break;
//		case 4:
//			if (in)
//			{
//				i = isFull(a, sp);
//				if (i == 1)
//					cout << "stack day\n";
//				else
//				    cout << "stack chua day\n";
//			}
//			else
//				cout << "vui long chon khoi tao stack\n";
//			break;
//		case 5:
//			if (in)
//			{
//				i = isEmpty(a, sp);
//				if (i == 1)
//					cout << "stack rong\n";
//				else
//				    cout << "stack khong rong\n";
//			}
//			else
//				cout << "vui long chon khoi tao stack\n";
//			break;
//		case 6:
//			Process_stack(a, sp);
//			break;
//		case 7:
//			cout << "Nhap gia tri tp: ";
//			cin >> x;
//			np = convertDectoBi(a, sp, x);
//			if (np == INT_MIN)
//				cout << "Qua trinh chuyen khong thanh cong\n";
//			else 
//				cout << "He nhi phan cua " << x << " la = " << np << endl;
//			break;
//		default:
//			cout << "Ket thuc chuong trinh! See you soon\n";
//		}
//	}while(choice >= 1 && choice <= 7);
//   system("pause");
//   return 0;
//}