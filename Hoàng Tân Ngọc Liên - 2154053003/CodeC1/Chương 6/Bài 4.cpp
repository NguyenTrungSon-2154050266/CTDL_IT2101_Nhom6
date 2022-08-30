//Bai 4, chuong6: TIM KIEM, DO THI, GIAI THUAT PRIM
#include <iostream>
#include <stdio.h>
#include <fstream>
#include <iomanip>
using namespace std;
// khai bao ma trang bang mang 2 chieu
#define MAX 20
int a[MAX][MAX];
int n;
char vertex[MAX];
void Initgraph()
{
	n = 0;

}
// nhap ma tran ke cua do thi
void inputgraph()
{
	cout << " nhap so dinh do thi n: ";
	cin >> n;
	for (int i = 0; i < n; i++)

	{
		cout << " Nhap ten dinh : ";

		cin >> vertex;
		cout << " nhap vao dong thu " << i + 1 << " :";
		for (int j = 0; j < n; j++)
			cin >> a[i][j];
	}
}
//Nhap graph tu file
void inputgraphfromtext()
{
	string file;
	ifstream myfile("mtts.txt");
	if (myfile.is_open())
	{
		myfile >> n;
		for (int i = 0; i < n; i++)
			myfile >> vertex[i];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				myfile >> a[i][j];
		}
	}
}
// Xuat ma tran ke cua do thi
void outputgraph()
{
	cout << setw(6) << left;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << setw(6) << left;
		cout << endl;
	}

}
//khai bap tap E
int E1[MAX];
int E2[MAX];
int wE[MAX];
int nE = 0;
int T1[MAX];
int T2[MAX];
int wT[MAX];
int nT = 0;
int TonTai(int d, int D[], int nD)
{
	for (int i = 0; i < nD; i++)
		if (D[i] == d)
			return 1;
	return 0;
}
void XoavitriE(int i)
{
	for (int j = i; j < nE; j++)
	{
		E1[j] = E1[j + 1];
		E2[j] = E2[j + 1];
		wE[j] = wE[j + 1];
	}
	nE--;
}
void XoaCanhE(int u, int v)
{
	for (int i = 0; i < nE; i++)
	{
		if (E1[i] == u && E2[i] == v)
		{
			XoavitriE(i);
			break;
		}
	}
}
void Prim(int s)
{
	int u = s, min, i, d1, d2;
	while (nT < n - 1)
	{
		for (int v = 0; v < n; v++)
			if (a[u][v] != 0)
				if (TonTai(v, T2, nT) == 0)
				{
					E1[nE] = u;
					E2[nE] = v;
					wE[nE] = a[u][v];
					nE++;
				}
		for (i = 0; i < nE; i++)
			if (TonTai(E2[i], T2, nT) == 0)
			{
				min = wE[i];
				d1 = E1[i];
				d2 = E2[i];
				break;


			}
		for (; i < nE; i++)
			if (TonTai(E2[i], T2, nT) == 0)
				if (min > wE[i])
				{
					min = wE[i];
					d1 = E1[i];
					d2 = E2[i];
				}
		T1[nT] = d1;
		T2[nT] = d2;
		wT[nT] = a[d1][2];
		a[d1][d2] = 0;
		a[d2][d1] = 0;
		nT++;
		XoaCanhE(d1, d2);
		i = d2;

	}
}
// Xuat ten dinh
void output(bool vertexName)
{
	int tong = 0;
	for (int i = 0; i < nT; i++)
	{
		if (vertexName)
			cout << endl << "(" << vertex[T1[1]] << ", " << vertex[T2[i]] << ")=" << wT[i];
		else
			cout << endl << "(" << T1[i] << "," << T2[i] << ")=" << wT[i];
		tong += wT[i];
	}
}
int main()
{
	int choice, x, i;
	system("cls");
	cout << " BAITAP4, CHUONG 6, TIM KIEM CAY KHUNG TOI THIEU, PRIM" << endl;
	cout << " 1.Khoi tao MA TRAN KE rong" << endl;
	cout << " 2.Nhap MA TRAN KE tu file text" << endl;
	cout << " 3.Nhap MA TRAN KE" << endl;
	cout << " 4.Xuat MA TRAN KE" << endl;
	cout << " 5.Tim CAY KHUNG TOI TIEU BANG PRIM" << endl;
	cout << " 6.Thoat" << endl;
	do
	{
		cout << "\nVui long chon so de thuc hien:";
		cin >> choice;
		switch (choice)
		{
		case 1:
			Initgraph();
			cout << " Ban vua khoi tao MA TRAN KE rong thanh con!\n";
			break;
		case 2:
			inputgraphfromtext();
			cout << " Ban vua nhap MA TRAN KE tu file\n";
			outputgraph();;
			break;
		case 3:
			inputgraph();
			cout << " Ban vua nhap MA TRAN KE tu file\n";
			outputgraph();
			break;
		case 4:
			outputgraph();
			break;
		case 5:
			cout << " Vui long nhap dinh xuat phap: ";
			cin >> x;
			Prim(x);
			cout << " Cay toi tieu voi PRIM" << endl;
			output(true);
			break;
		case 6:
			cout << " Thoat chuong trinh!!!!\n";
			break;
		default:
			break;
		}
	} while (choice != 6);
	system("pause");
	return 0;
}