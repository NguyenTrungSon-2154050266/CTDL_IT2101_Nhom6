////Chuong 3, Bai 1 : Xep thu tu & tim kiem 
//#include <stdio.h>
//#include <iostream>
//#include <ctime>
//using namespace std;
//
//#define MAX 5000
//
////cau 1.1 - Khai bao cau truc DS
//int a[MAX];
//int n;
//
////cau 1.2 - Nhap danh sach
//void input(int a[], int& n)
//{
//	cout << "Nhap so luong phan tu cua danh sach: ";
//	cin >> n;
//	cout << "Nhap cac phan tu cua danh sach: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << "a[" << i << "] = ";
//		cin >> a[i];
//	}
//}
//
////cau 1.2* - Nhap danh sach tu dong
//void init(int a[], int& n)
//{
//	cout << "Nhap so luong phan tu cua danh sach: ";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		a[i] = rand() % 10000 + 1;
//	}
//	cout << "Danh sach them vao ngau nhien la: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//}
//
////cau 1.3 - xuat danh sach
//void output(int a[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//}
//
////copy array
//void CopyArray(int a[], int b[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		b[i] = a[i];
//	}
//}
//
////swap
//void swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//
////cau 1.4 - insertion sort
//void insertionsort(int a[], int n)
//{
//	int i, key, j;
//	for (i = 1; i < n; i++)
//	{
//		key = a[i];
//		j = i + 1;
//		while (j >= 0 && a[j] > key)
//		{
//			a[j + 1] = a[i];
//			j = j - 1;
//		}
//		a[j + 1] = key;
//	}
//}
//
////cau 1.5 - selection sort
//void selectionsort(int a[], int n)
//{
//	int i, j, min_pos;
//	for (int i = 0; i < n - 1; i++)
//	{
//		min_pos = i;
//		for (j = i + 1; j < n; j++)
//			if (a[j] < a[min_pos])
//			{
//				min_pos = j;
//			}
//		swap(a[i], a[min_pos]);
//	}
//}
//
////cau 1.6 interchange sort
//void interchangesort(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//		for (int j = i + 1; j < n; j++)
//			if (a[i] > a[j])
//				swap(a[i], a[j]);
//}
//
////cau 1.7 bubble sort
//void bubblesort(int a[], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//		for (int j = n-1; j > i; j--)
//			if (a[j-1] > a[j])
//				swap(a[j], a[j-1]);
//}
//
////cau 1.8 quick sort
//void quicksort(int a[], int l, int r)
//{
//	int x = a[(l + r) / 2];
//	int i = l;
//	int j = r;
//	while (i < j)
//	{
//		while (a[i] < x)
//			i++;
//		while (a[j] > x)
//			j--;
//		if (i <= j)
//		{
//			swap(a[i], a[j]);
//			i++;
//			j--;
//		}
//	}
//	if (l < j)
//		quicksort(a, l, j);
//	if (i < r)
//		quicksort(a, i, r);
//}
//
////cau 1.9 heap sort
//void shift(int a[], int i, int n)
//{
//	int j = 2 * i + 1;
//	if (j >= n)
//		return;
//	if (j + 1 < n)
//		if (a[j] < a[j + 1])
//			j++;
//	if (a[i] >= a[j])
//		return;
//	else
//	{
//		int x = a[i];
//		a[i] = a[j];
//		a[j] = x;
//		shift(a, j, n);
//	}
//}
//
//void heapsort(int a[], int n)
//{
//	int i = (n / 2) - 1;
//	while (i >= 0)
//	{
//		shift(a, i, n);
//		i--;
//
//	}
//	int r = n - 1;
//	while (r > 0)
//	{
//		swap(a[0], a[r]);
//		r--;
//		if (r > 0)
//			shift(a,0,r);
//	}
//}
//
////Cau 1.10 
//void searchSequence(int a[], int n, int x)
//{
//	int i = 0;
//	while (i < n && a[i] != x)
//	{
//		i++;
//	}
//	if (i == n)
//	{
//		cout << "Tim thay tai vi tri " << i;
//	}
//}
//
////Cau 1.11
//int searchBinary(int a[], int l, int r, int x)
//{
//	if (r >= l)
//	{
//		int mid = l + (r - l) / 2; // tuong duong (l+r)/2 nhung uu diem tranh tran so khi l,r lon
//
//		//Neu a[mid] = x, tra ve chi so va ket thuc
//		if (a[mid] == x)
//			return mid;
//
//		//Neu a[mid] > x, thuc hien tim kiem nua trai cua mang
//		if (a[mid] > x)
//			return searchBinary(a, l, mid - 1, x);
//
//		//Neu a[mid] < x, thuc hien tim kiem nua phai cua mang
//		return searchBinary(a, mid + 1, r, x);
//
//		//Neu khong tim thay
//		return -1;
//	}
//}
//
//int main()
//{
//	int b[MAX];
//	clock_t start;
//	double duration;
//	int choice, x, i;
//	system("cls");
//	cout << "---------- BT1, Chuong 3, sap xep & tim kiem ----------" << endl;
//	cout << "0. Khoi tao danh sach ngau nhien" << endl;
//	cout << "1. Nhap DS tu ban phim" << endl;
//	cout << "2. Xuat DS" << endl;
//	cout << "3. Xep thu tu SELECTION SORT" << endl;
//	cout << "4. Xep thu tu INSERTION SROT " << endl;
//	cout << "5. Xep thu tu BUBBLE SORT" << endl;
//	cout << "6. Xep thu tu INTERCHANGE SORT" << endl;
//	cout << "7. Xep thu tu QUICK SORT" << endl;
//	cout << "8. Xep thu tu HEAP SORT" << endl;
//	cout << "9. Tim kiem phan tu trong danh sach co thu tu bang phuong phap TUAN TU" << endl;
//	cout << "10.Tim kiem phan tu trong danh sach co thu tu bang phuong phap NHI PHAN " << endl;
//	cout << "11. THOAT" << endl;
//
//	do
//	{
//		cout << "\n Vui long chon so de thuc hien: ";
//		cin >> choice;
//		switch (choice)
//		{
//		case 0:
//			init(a, n);
//			break;
//		case 1:
//			input(a, n);
//			break;
//		case 2:
//			cout << "DS dang co la: " << endl;
//			output(a, n);
//			break;
//		case 3: 
//			CopyArray(a, b, n);
//			start = clock();
//			selectionsort(b, n);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			if (n < 100)
//			{
//				cout << "DS sau khi sap xep voi SELECTION SORT la: " << endl;
//				output(b, n);
//			}
//			if (duration > 0)
//			{
//				cout << "Thoi gian SELECTION SORT la: " << duration * 1000000 << " Miliseconds" << endl;
//			}
//			break;
//		case 4:
//			CopyArray(a, b, n);
//			start = clock();
//			insertionsort(b, n);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			if (n < 100)
//			{
//				cout << "DS sau khi sap xep voi SELECTION SORT la: " << endl;
//				output(b, n);
//			}
//			if (duration > 0)
//			{
//				cout << "Thoi gian INSERTION SORT la: " << duration * 1000000 << " Miliseconds" << endl;
//			}
//			break;
//		case 5:
//			CopyArray(a, b, n);
//			start = clock();
//			bubblesort(b, n);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			if (n < 100)
//			{
//				cout << "DS sau khi sap xep voi SELECTION SORT la: " << endl;
//				output(b, n);
//			}
//			if (duration > 0)
//			{
//				cout << "Thoi gian BUBBLE SORT la: " << duration * 1000000 << " Miliseconds" << endl;
//			}
//			break;
//		case 6: 
//			CopyArray(a, b, n);
//			start = clock();
//			interchangesort(b, n);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			if (n < 100)
//			{
//				cout << "DS sau khi sap xep voi SELECTION SORT la: " << endl;
//				output(b, n);
//			}
//			if (duration > 0)
//			{
//				cout << "Thoi gian INTERCHANGE SORT la: " << duration * 1000000 << " Miliseconds" << endl;
//			}
//			break;
//		case 7:
//			CopyArray(a, b, n);
//			start = clock();
//			quicksort(b, 0, n-1);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			if (n < 100)
//			{
//				cout << "DS sau khi sap xep voi SELECTION SORT la: " << endl;
//				output(b, n);
//			}
//			if (duration > 0)
//			{
//				cout << "Thoi gian QUICK SORT la: " << duration * 1000000 << " Miliseconds" << endl;
//			}
//			
//			break;
//		case 8:
//			CopyArray(a, b, n);
//			start = clock();
//			heapsort(b, n);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			if (n < 100)
//			{
//				cout << "DS sau khi sap xep voi SELECTION SORT la: " << endl;
//				output(b, n);
//			}
//			if (duration > 0)
//			{
//				cout << "Thoi gian HEAP SORT la: " << duration * 1000000 << " Miliseconds" << endl;
//			}
//			break;
//		case 9:
//			cout << "Vui long nhap gia tri x = ";
//			cin >> x;
//			start = clock();
//			searchSequence(a, n, x);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			if (duration > 0)
//				cout << "\n - Thoi gian tim kiem TUAN TU la: " << duration * 1000000 << "Miliseconds" << endl;
//			break;
//			break;
//		case 10:
//			cout << "Vui long nhap gia tri x = ";
//			cin >> x;
//			start = clock();
//			i = searchBinary(b, 0, n, x);
//			searchSequence(a, n, x);
//			duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//			if (i == -1)
//				cout << "Khong tim thay x = " << x << " trong day!" << endl;
//			else
//				cout << "Tim thay x = " << x << " tai vi tri i = " << i << endl;
//			if(duration >0)
//				cout << "\n - Thoi gian tim kiem NHI PHAN la: " << duration * 1000000 << "Miliseconds" << endl;
//			break;
//		case 11:
//			cout << "Goodbye!" << endl;
//			break;
//		default:
//			break;
//		}
//		
//	}while(choice != 11);
//	system("pause");
//	return 0;
//}
//
//
