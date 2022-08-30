////Bài 1, Chuong 2: DANH SACH DAC
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//#define MAX 100
//
////cau 1.1
//int a[MAX];
//int n;
//
////cau 1.2 - Nhap DS
//void input(int a[], int& n)
//{
//	cout << "Nhap vao so luong phan tu cua danh sach" << endl;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "a[ " << i << " ]= ";
//		cin >> a[i];
//	}
//}
//
////Cau 1.3 Xuat DS
//void output(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << "\t";
//	}
//	cout << endl;
//}
//
////Cau 1.4 - Tim phan tu
//int search(int a[], int n, int x)
//{
//	int i = 0;
//	while ((i < n ) && (a[i] != x))
//	{
//		i++;
//		if (i == n)
//		    i = -1;
//	}
//	return i;
//}
//
////Cau 1.5 - Them cuoi
//int insert_last(int a[], int& n, int x)
//{
//	if (n < MAX)
//	{
//		a[n] = x;
//		n++;
//		return 1;
//	}
//	return 0;
//}
//
////Cau 1.6 - Xoa cuoi
//int delete_last(int a[], int& n)
//{
//	if (n > 0)
//	{
//		n--;
//		return 1;
//	}
//	return 0;
//}
//
////cau 1.7 - Xoa tai vi tri i
//int delete_at_pos(int a[], int& n, int i)
//{
//	if (i >= 0 && i < n)
//	{
//		for (int j = i; j < n; j++)
//		{
//			a[j] = a[j + 1];
//		}
//		n--;
//		return 1;
//	}
//	return 0;
//}
//
////Cau 1.8 - Tim roi xoa
//int search_delete(int a[], int& n, int x)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] == x)
//		{
//			delete_at_pos(a, n, i);
//			return 1;
//		}
//	}
//	return 0;
//}
//
////Ham MAiN
//int main()
//{
//	int choice = 0;
//	int x, i;
//	system("cls");
//	cout << "-------BAI TAP 1, CHUONG 2, DS DAC-------" << endl;
//	cout << "1. Nhap danh sach\n"
//		 << "2. Xuat danh sach\n"
//		 << "3. Tim phan tu co gia tri x trong danh sach\n"
//		 << "4. Them phan tu vao cuoi danh sach\n"
//		 << "5. Xoa phan tu cuoi danh sach\n"
//		 << "6. Xoa phan tu tai vi tri i\n"
//		 << "7. Tim va xoa phan tu neu co\n"
//		 << "8. Thoat\n";
//
//	do {
//		cout << "Vui long chon (1-8): ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			input(a, n);
//			cout << "Nhap danh sach thanh cong!" << endl;
//			break;
//		case 2:
//			cout << "Danh sach da nhap la: " << endl;
//			output(a, n);
//			break;
//		case 3:
//			cout << "Vui long nhap gia tri can tim x = ";
//			cin >> x;
//			i = search(a, n, x);
//			if (i == -1)
//				cout << "Tim khong thay x = " << x << " trong ds!" << endl;
//			else
//				cout << "Tim thay x = " << x << " tai vi tri i = " << i << endl;
//			break;
//		case 4:
//			cout << "Vui long nhap x can them cuoi DS, x = ";
//			cin >> x;
//			i = insert_last(a, n, x);
//			if (i == 0)
//				cout << "DS da day, khong the them" << endl;
//			else
//			{
//				cout << "Da them thanh cong x = " << x << " vao cuoi ds!" << endl;
//				cout << "Danh sach sau them la\n";
//				output(a, n);
//			}
//			break;
//		case 5:
//			i = delete_last(a, n);
//			if (i > 0)
//			{
//				cout << "Xoa phan tu cuoi thanh cong!\n";
//				cout << "Danh sach sau khi xoa la: \n";
//				output(a,n);
//			}
//			break;
//		case 6:
//			cout << "Nhap vi tri can xoa i = ";
//			cin >> x;
//			i = delete_at_pos(a, n, x);
//			if (i == 1)
//			{
//				cout << "Xoa phan tu tai vi tri i = " << x << " thanh cong!\n";
//				cout << " Danh sach sau khi xoa\n";
//				output(a, n);
//			}
//			else
//				cout << "Khong co phan tu nao de xoa!";
//			break;
//		case 7:
//			cout << "Nhap gia tri can tim de xoa x = ";
//			cin >> x;
//			i = search_delete(a, n, x);
//			if( i == 1)
//			{
//				cout << "Da tim thay x va xoa thanh cong!\n";
//				cout << "Danh sach sau khi xoa\n";
//				output(a, n);
//			}
//			else
//				cout << "Khong tim thay x = " << x << " de xoa!\n";
//			break;
//		default:
//			cout << "Ket thuc chuong trinh\n";
//		}
//	}while (choice >= 1 && choice <= 7);
//	system("pause");
//	return 0;
//}