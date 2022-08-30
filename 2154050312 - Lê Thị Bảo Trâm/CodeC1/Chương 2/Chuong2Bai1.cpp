//Bai 1, Chuong 2 : DANH SACH DAC
#include <iostream>
#include <stdio.h>
using namespace std;
#define MAX 100
//Cau1.1
int a[MAX];
int n;
//Cau1.2: Nhap DS
void input(int a[], int& n)
{
	cout << " Nhap vao so luong phan tu cua D5" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}

}
//Cau1.3: Xuat DS
void output(int a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
	}
}
//Cau1.4: Tim DS
int search(int a[], int& n, int x)
{
	int i = 0;
	while (i < n && a[i] != x)
		i++;
	if (i == n)
		return -1;
	return a[i];
}
//Cau1.5: Them cuoi
int insert_last(int a[], int& n, int x)
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
//VCau1.6: Xoa cuoi DS
int delete_last(int a[], int& n)
{
	if (n > 0)
	{
		n--;
		return 1;
	}
}
//Cau1.7: Xoa tai vi tri i
int delete_at_pos(int a[], int& n, int i)
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
//Cau 1.8: Tim roi xoa
int search_delete(int a[], int& n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			delete_at_pos(a, n, i);
			return 1;
		}
	}
	return 0;
}
//Ham main
int main()
{
	int choice = 0;
	int x, i;
	system("cls");
	cout << " ------- BAI TAP 1, CHUONG 2, DS DAC ------- " << endl;
	cout << "1. Nhap danh sach " << endl;
	cout << "2. Xuat danh sach " << endl;
	cout << "3. Tim phan tu co gia tri x trong danh sach " << endl;
	cout << "4. Them phan tu vao cuoi danh sach " << endl;
	cout << "5. Xoa phan tu cuoi danh sach " << endl;
	cout << "6. Xoa phan tu tai vi tri i " << endl;
	cout << "7. Tim va xoa phan tu neu co " << endl;
	cout << "8. Thoat " << endl;

	do
	{
		cout << "Vui long chon so de thuc hien lenh: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			input(a, n);
			cout << " Nhap DS thanh cong !" << endl;
			break;
		case 2:
			cout << " DS da nhap la:" << endl;
			output(a, n);
			break;
		case 3:
			cout << " Vui long nhap vi tri can tim x = ";
			cin >> x;
			i = search(a, n, x);
			if (i == -1)
				cout << " Khong tim thay x = " << x << " trong DS ! " << endl;
			else
				cout << " Tim thay x=" << x << " tai vi tri i= " << i << endl;
		case 4:
			cout << " Vui long nhap x can them cuoi DS, x= ";
			cin >> x;
			i = insert_last(a, n, x);
			if (i == 0)
				cout << "DS da day, khong the them " << endl;
			else
			{
				cout << "Da them thanh cong x= " << x << " vao cuoi ds !! " << endl;
				cout << "Danh sach sau them la \n";
				output(a, n);
			}
		case 5:
			i = delete_last(a, n);
			if (i > 0)
			{
				cout << "Xoa phan tu cuoi thanh cong !! \n";
				cout << "Danh sach sau xoa la \n";
				output(a, n);
			}
			break;
		case 6:
			cout << " Nhap vi tri can xoa i=";
			cin >> x;
			i = delete_at_pos(a, n, x);
			if (n == 1)
			{
				cout << " Xoa phan tu tai vi tri i=" << x << " thanh cong !!\n";
				cout << " Danh sach sau xoa la\n";
				output(a, n);
			}
			else
				cout << " Khong co phan tu nao de xoa ! " << endl;
			break;
		case 7:
			cout << "Vui long nhap x can tim de xoa, x=";
			cin >> x;
			i = search_delete(a, n, x);
			if( i == 1)
			{
				cout << "Xoa phan tu x=" << x << "thanh cong !! \n";
				cout << "Danh sach sau xoa la \n";
				output(a, n);
			}
			else 
				cout << "Khong co phan tu nao de xoa !!" << endl;
			break;
		case 8:
			cout << "Goodbye .... !!" << endl;
			break;
		default:
			break;
		}
	}while (choice != 8);
	system("pause");
	return 0;
}