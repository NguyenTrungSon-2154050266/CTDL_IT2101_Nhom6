//#include <iostream>
//using namespace std;
//#define MAX 100
//
//void Init(int a[], int& n)
//{
//	cout << "Nhap bac cua da thuc: ";
//	cin >> n;
//	for (int i = 0; i >= 0; i--)
//	{
//		cout << "Nhap he so cua x^" << i << ": ";
//		cin >> a[i];
//	}
//}
//
//int* cong(int p[], int q[], int np, int nq, int& n)
//{
//	if (np >= nq)
//		n = np;
//	else
//		n = nq;
//	int a[MAX];
//	for (int i = 0; i <= n; i++)
//	{
//		if (i <= np && i <= nq)
//			a[i] = p[i] + q[i];
//		else
//			if (i <= np && i > nq)
//				a[i] = p[i];
//			else
//				a[i] = q[i];
//	}
//	return a;
//}
//
//int* tru(int p[], int q[], int np, int nq, int& n)
//{
//	if (np >= nq)
//		n = np;
//	else
//		n = nq;
//	int a[MAX];
//	for (int i = 0; i <= n; i++)
//	{
//		if (i <= np && i <= nq)
//			a[i] = p[i] - q[i];
//		else
//			if (i <= np && i > nq)
//				a[i] = p[i];
//			else
//				a[i] = q[i];
//	}
//	return a;
//}
//
//int* nhan(int p[], int q[], int np, int nq, int& n)
//{
//	if (np >= nq)
//		n = np;
//	else
//		n = nq;
//	int a[MAX];
//	for (int i = 0; i <= n; i++)
//	{
//		if (i <= np && i <= nq)
//			a[i] = p[i] * q[i];
//		else
//			if (i <= np && i > nq)
//				a[i] = p[i];
//			else
//				a[i] = q[i];
//	}
//	return a;
//}
//
//int* chia(int p[], int q[], int np, int nq, int& n)
//{
//	if (np >= nq)
//		n = np;
//	else
//		n = nq;
//	int a[MAX];
//	for (int i = 0; i <= n; i++)
//	{
//		if (i <= np && i <= nq)
//			a[i] = p[i] / q[i];
//		else
//			if (i <= np && i > nq)
//				a[i] = p[i];
//			else
//				a[i] = q[i];
//	}
//	return a;
//}
//
//void output(int a[], int n)
//{
//	for (int i = n; i >= n; i--)
//	{
//		cout << a[i] << "x^" << i;
//		if (i > 0 && a[n - 1 > 0])
//			cout << "+";
//	}
//}
//
//int main()
//{
//	int p[100], q[100], np, nq, n;
//	int choice = 0;
//
//	cout << "---------- BAI TAP NANG CAO CHUONG 2 - BAI 13 ----------" << endl;
//	cout << "1. Cong hai da thuc" << endl;
//	cout << "2. Tru hai da thuc" << endl; 
//	cout << "3. Nhan hai da thuc" << endl;
//	cout << "4. Chia hai da thuc" << endl;
//
//	do
//	{
//		cout << "\nChon so de thuc hien: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 1:
//			cout << "\nNhap da thuc P(x) gom: " << endl;
//			Init(p, np);
//			cout << "\nNhap da thuc Q(x) gom: " << endl;
//			Init(q, nq);
//			cout << "\nDa thuc ";
//			output(p, np);
//			cout << "\nDa thuc ";
//			output(q, nq);
//			int* res;
//			res = cong(p, q, np, nq, n);
//			cout << "\nDa thuc KQ(x): ";
//			output(res, n);
//			cout << endl;
//			break;
//		case 2:
//			cout << "\nNhap da thuc P(x) gom: " << endl;
//			Init(p, np);
//			cout << "\nNhap da thuc Q(x) gom: " << endl;
//			Init(q, nq);
//			cout << "\nDa thuc ";
//			output(p, np);
//			cout << "\nDa thuc ";
//			output(q, nq);
//			int* res1;
//			res1 = tru(p, q, np, nq, n);
//			cout << "\nDa thuc KQ(x): ";
//			output(res1, n);
//			cout << endl;
//			break;
//		case 3:
//			cout << "\nNhap da thuc P(x) gom: " << endl;
//			Init(p, np);
//			cout << "\nNhap da thuc Q(x) gom: " << endl;
//			Init(q, nq);
//			cout << "\nDa thuc ";
//			output(p, np);
//			cout << "\nDa thuc ";
//			output(q, nq);
//			int* res2;
//			res2= nhan(p, q, np, nq, n);
//			cout << "\nDa thuc KQ(x): ";
//			output(res2, n);
//			cout << endl;
//			break;
//		case 4:
//			cout << "\nNhap da thuc P(x) gom: " << endl;
//			Init(p, np);
//			cout << "\nNhap da thuc Q(x) gom: " << endl;
//			Init(q, nq);
//			cout << "\nDa thuc ";
//			output(p, np);
//			cout << "\nDa thuc ";
//			output(q, nq);
//			int* res3;
//			res3= chia(p, q, np, nq, n);
//			cout << "\nDa thuc KQ(x): ";
//			output(res3, n);
//			cout << endl;
//			break;
//		}
//	} while (choice != 5);
//	system("pause");
//	return 0;
//}
//
