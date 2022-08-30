////Chuong 2, Bai 5: STACK voi danh sach Dac
//#include <iostream>
//#include <stdio.h>
//using namespace std;
////5.1
//
//#define MAX 100
//
////5.2 - Khoi tao STACK rong
//void init(int a[], int& sp)
//{
//	sp = -1;
//};
//
//
////5.3 - Kiem tra STACK rong
//int isEmpty(int a[], int sp)
//{
//	if (sp == -1)
//		return 1;
//	return 0;
//}
//
////5.4 - Kiem tra STACK day
//int isFull(int a[], int sp)
//{
//	if (sp == MAX - 1)
//		return 1;
//	return 0;
//}
//
////5.5 - Them mot phan tu vao STACK
//int Push(int a[], int& sp, int x)
//{
//	if (sp < MAX - 1)
//	{
//		a[++sp] = x;
//		return 1;
//	}
//	return 0;
//}
//
//
////5.6 - Xoa/lay mot phan tu trong STACK
//int Pop(int a[], int& sp, int& x)
//{
//	if (sp != -1)
//	{
//		x = a[sp--]; //x gan = a[sp] sau do giam sp
//		return 1;
//	}
//	return 0;
//}
//
//// Xuat STACK
//void Process_stack(int a[], int sp)
//{
//	for (int i = 0; i < sp + 1; i++)
//		cout << a[i] << "<--";
//	cout << endl;
//
//}
//
////chuyen he thap phan sang nhi phan
//int convertDecToBi(int a[], int& sp, int tp) // gt thap phan can chuyen
//{
//	init(a, sp); // khoi tao stack moi de khong anh huong bai khac
//	while (tp != 0)
//	{
//		int du = tp % 2;
//		if (!Push(a, sp, du));
//		return INT_MIN;
//		tp /= 2; // chia lay nguyen cho 2
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
//int main()
//{
//	int a[MAX], sp, choice, i, x, in = 0, np;
//	system("cls");
//	cout << " ---------- Chuong 2 - Bai 5 STACK voi danh sach DAC ----------" << endl;
//	cout << "1. Khoi tao stack rong " << endl;
//	cout << "2. Them phan tu vao STACK " << endl;
//	cout << "3. Lay phan tu ra khoi STACK " << endl;
//	cout << "4. Kiem tra STACK co day hay khong " << endl;
//	cout << "5. Kiem tra STACK co rong hay khong " << endl;
//	cout << "6. Xuat STACK " << endl;
//	cout << "7. Dung STACK chuyen he thap phan sang he nhi phan" << endl;
//	cout << "8. Thoat" << endl;
//
//	do
//	{
//		cout << "\nVui long chon so: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			init(a, sp);
//			in = 1;
//			cout << "Khoi tao STACK thanh cong!" << endl;
//			break;
//		case 2:
//			if (in)
//			{
//				cout << "Nhap phan tu can them vao STACK x= ";
//				cin >> x;
//				i = Push(a, sp, x);
//				if (i == 1)
//					cout << "Them vao STACK thanh cong" << endl;
//				else
//					cout << "Them vao STACK khong thanh cong" << endl;
//			}
//			else
//				cout << "Vui long chon khoi tao STACK" << endl;
//			break;
//
//		case 3:
//			if (in)
//			{
//				i = Pop(a, sp, x);
//				if (i == 1)
//				{
//					cout << "Phan tu vua lay ra khoi STACK la: " << x << endl;
//					cout << "STACK sau khi lay ra 1 phan tu la: " << endl;
//					Process_stack(a, sp);
//				}
//				else
//					cout << "Lay ra khong thanh cong" << endl;
//			}
//			else
//				cout << "Vui long chon khoi tao STACK" << endl;
//			break;
//		case 4:
//			if (in)
//			{
//				i = isFull(a, sp);
//				if (i == 1)
//					cout << "STACK day" << endl;
//				else
//					cout << "STACK chua day" << endl;
//			}
//			else
//				cout << "Vui long chon khoi tao STACK" << endl;
//			break;
//		case 5:
//			if (in)
//			{
//				i = isEmpty(a, sp);
//				if (i == 1)
//					cout << "STACK rong" << endl;
//				else
//					cout << "STACK khong rong" << endl;
//			}
//			else
//				cout << "Vui long chon khoi tao STACK" << endl;
//			break;
//		case 6:
//			Process_stack(a, sp);
//			break;
//		case 7:
//			cout << " Nhap gia tri tp: ";
//			cin >> x;
//			np = convertDecToBi(a, sp, x);
//			if (np == INT_MIN)
//				cout << "Qua trinh chuyen khong thanh cong" << endl;
//			else
//				cout << "He nhi phan cua " << x << " la = " << np << endl;
//			break;
//		default:
//			cout << "Ket thuc chuong trinh ! See you soon " << endl;
//		}
//	} while (choice != 7);
//	system("pause");
//	return 0;
//}