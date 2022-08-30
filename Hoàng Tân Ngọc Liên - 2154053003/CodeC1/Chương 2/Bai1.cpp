#include <iostream>
#include <stdio.h>
using namespace std;
int const MAX = 100;

//Cau 1.1
int a[MAX];
int n;

//Cau 1.2
void nhap(int a[MAX], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: " << endl;
		cin >> a[i];
	}
}
//Cau 1.3
void xuat(int a[MAX], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
//Cau 1.4
void tim(int a[MAX], int& n, int &x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			cout<< "Tim thay gia tri cua x tai vi tri: " << i << endl;
		}
	}
}
//Cau 1.5
int themcuoi(int a[], int& n, int x)
{
	if (n < MAX)
	{
		a[n] = x;
		n++;
		return 1;
	}
	else
		return 0;
}
// Cau 1.6
int xoacuoi(int a[MAX], int &n)
{
	if (n > 0)
	{
		n--;
		return 1;
	}
	return 0;
}
//Cau 1.7
int xoaphantu(int a[MAX], int& n, int i)
{
	if (i >= 0 && i < n)
	{
		for (int j = i; j < n; j++)
		{
			a[j] = a[j + 1];
		}
		n--;
		return 1;
	}
	return 0;
}
// Cau 1.8
int  timvaxoa(int a[MAX], int& n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			xoaphantu(a, n, i);
			return 1;
		}
	}
	return 0;
}
void menu()
{
	cout << "**********MENU BAI THUC HANH SO 1 CHUONG 2**********\n";
	cout << "1.Khai bao cau truc danh sach\n";
	cout << "2.Nhap danh sach\n";
	cout << "3.Xuat danh sach ra man hinh\n";
	cout << "4.Tim  mot phan tu trong danh sach\n";
	cout << "5.Them mot phan tu vao cuoi danh sach\n";
	cout << "6.Xoa phan tu o cuoi danh sach\n";
	cout << "7.Thu tu xoa phan tu tai vi tri thu i\n";
	cout << "8.Tim mot phan tu trong danh sach. Neu tim thay xoa phan tu do\n";
	cout << "9.Thoat chuong trinh.\n";
}
int main()
{
	int choice = 0;
	int x, i;
	cout << "Nhap phan tu cua mang:";
	cin >> n;
	system("cls");
	menu();
	do
	{
		cout << "Vui long chon chuc nang de thuc hien: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Nhap phan tu cua mang:";
			cin >> n;
			break;
		case 2:
			nhap(a, n);
			break;
		case 3:
			xuat(a, n);
			break;
		case 4:
			cout << "Nhap gia tri can tim : ";
			cin >> x;
			tim(a, n, x);
			break;
		case 5:
			cout << "Vui long nhap vi tri can them: ";
			cin >> x;
			i = themcuoi(a, n, x);
			if (i == 0)
				cout << "Danh sach da day khong the them!\n";
			else
			{
				cout << "Da them thanh cong x = " << x << " vao cuoi danh sach! \n";
				cout << "Danh sach vua them la: " << endl;
				xuat(a, n);
			}
			break;
		case 6:
			i = xoacuoi(a, n);
			if (i == 0)
			{
				cout << "Xoa phan tu thanh cong! \n";
				cout << "Danh sach sau khi xoa la: " << endl;
				xuat(a, n);
			}
			break;
		case 7:
			cout << "Nhap vi tri can xoa: ";
			cin >> x;
			i = xoaphantu(a, n, x);
			if (i == 0)
			{
				cout << "Xoa phan tu o vi tri " << x << " thanh cong! \n";
				cout << "Danh sach vua xoa la: " << endl;
				xuat(a, n);
			}
			else
				cout << " Khong tim thay vi tri de xoa!\n";
			break;
		case 8:
			cout << "Nhap vi tri can tim va xoa : ";
			cin >> x;
			i = timvaxoa(a, n, x);
			if (i == 1)
			{
				cout << "Tim thay vi tri va xoa!\n";
				cout << "Danh sach vua xoa la: \n";
				xuat(a, n);
			}
			else
				cout << "Khong tim thay vi tri can xoa!\n";
			break;
		case 9:
			cout << "Thoat chuong trinh!\n";
			break;
		default:
			break;
		}
	} while (choice != 9);
	system("pause");
	return 0;
}
