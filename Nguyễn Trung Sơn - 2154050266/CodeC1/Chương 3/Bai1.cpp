//#include <iostream>
//#include <stdio.h>
//#include <ctime>
//#include <cstdlib>
//using namespace std;
//void swap(int& a, int& b)
//{
//    int  c;
//    c = a;
//    a = b;
//    b = c;
//}
//// 1.1 Khai bao cau truc danh sach
//int const MAX = 5000;
//int a[MAX];
//int n;
////1.2 Viết thủ tục nhập danh sách.
//void input(int a[], int& n)
//{
//    cout << "Nhap so phan tu cua danh sach: ";
//    cin >> n;
//    cout << " Nhap cac phan tu cua danh sach. \n";
//    for (int i = 0; i < n; i++)
//    {
//        cout << "a[" << i << "]: ";
//        cin >> a[i];
//    }
//}
////1.2* Viết thủ tục nhập danh sách tự động.
//void init(int a[], int& n)
//{
//    cout << "Nhap so phan tu cua danh sach: ";
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        a[i] = rand() % 10000 + 1;
//    }
//    cout << "Danh sach da them vao thanh cong! \n";
//}
////1.3 Viết thủ tục xuất danh sách
//void export_list(int a[], int& n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
//}
//// coppy arr
//void copyarr(int a[], int b[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        b[i] = a[i];
//    }
//}
////1.4 Viết thủ tục sắp xếp danh sách theo thứ tự tăng dần bằng thuật toán InsertionSort. 
//void intertionalSort(int a[], int n)
//{
//    int x, i, j;
//    for (int i = 1; i < n; i++)
//    {
//        x = a[i];
//        j = i + 1;
//        while (0 <= j && x < a[j])
//        {
//            a[j + 1] = a[j];
//            j = j - 1;
//        }
//        a[j + 1] = x;
//    }
//}
////1.5 Viết thủ tục sắp xếp danh sách theo thứ tự tăng dần bằng thuật toán SelectionSort. 
//void SelectionSort(int a[], int n)
//{
//    int  min_pos, i, j;
//    for (i = 0; i < n - 1; i++)
//    {
//        min_pos = i;
//        for (j = i + 1; j < n; j++)
//            if (a[j] < a[min_pos])
//                min_pos = j;
//        swap(a[min_pos], a[i]);
//    }
//}
////1.6 Viết thủ tục sắp xếp danh sách theo thứ tự tăng dần bằng thuật toán InterchangeSort. 
//void InterchangeSort(int a[], int n)
//{
//    for (int i = 0; i < n - 1; i++)
//        for (int j = i + 1; j < n; j++)
//            if (a[i] > a[j])
//                swap(a[i], a[j]);
//}
//
////1.7 Viết thủ tục sắp xếp danh sách theo thứ tự tăng dần bằng thuật toán BubbleSort. 
//void BubbleSort(int a[], int n)
//{
//    for (int i = 0; i < n - 1; i++)
//        for (int j = n - 1; j > i; j--)
//            if (a[j - 1] > a[j])
//                 swap(a[j], a[j - 1]);
//
//}
//
////1.8 Viết thủ tục sắp xếp danh sách theo thứ tự tăng dần bằng thuật toán QuickSort. 
//void QuickSort(int a[], int left, int right)
//{
//    int x = a[(left + right) / 2];
//    int i = left;
//    int j = right;
//    while (i < j)
//    {
//        while (a[i] < x)
//            i++;
//        while (a[j] > x)
//            j--;
//        if (i <= j)
//        {
//            swap(a[i], a[j]);
//            i++;
//            j--;
//        }
//    }
//    if (left < j)
//        QuickSort(a, left, j);
//    if (i < right)
//        QuickSort(a, i, right);
//}
//
////1.9 Viết thủ tục sắp xếp danh sách theo thứ tự tăng dần bằng thuật toán HeapSort. 
//void shift(int a[], int i, int n)
//{
//    int j = 2 * i + 1;
//    if (j >= n)
//        return;
//    if (j + 1 < n)
//    {
//        if (a[j] < a[j + 1])
//        {
//            j++;
//        }
//    }
//    if (a[j] >= a[j])
//        return;
//    else
//    {
//        int x = a[i];
//        a[i] = a[j];
//        a[j] = x;
//        shift(a, j, n);
//    }
//}
//void HeapSort(int a[], int n)
//{
//    int i = (n / 2) - 1;
//    while (i >= 0)
//    {
//        shift(a, i, n);
//        i --;
//    }
//    int right = n - 1;
//    while (right > 0)
//    {
//        swap(a[0], a[right]);
//        right --;
//        if (right > 0)
//            shift(a, 0, right);
//    }
//
//}
//
////1.10 Viết thủ tục tìm kiếm một phần tử trong danh sách có thứ tự (dung phương pháp tìm kiếm tuần tự).
//int Search(int a[], int n, int X)
//{
//    int i = 0;
//    while (i < n && a[i] != X)
//        i++;
//    if (i < n)
//        return i; 
//    return -1;
//}
//
//
////1.11 Viết thủ tục tìm kiếm một phần tử trong danh sách có thứ tự (dung phương pháp tìm kiếm nhị phân). 
//int BinarySearch(int a[], int n, int x)
//{
//    int left = 0, right = n - 1, mid;
//    while (left <= right)
//    {
//        mid = (left + right) / 2;
//        if (a[mid] == x) 
//            return mid;
//        if (x > a[mid]) left = mid + 1;
//        else right = mid - 1;
//    }
//    return -1; 
//}
//
//
//int main()
//{
//    int b[MAX];
//    clock_t start = clock(); 
//    double duration;
//    int choice, x, i;
//    system("cls");
//    cout << "1. Khoi tao danh sach ngau nhien." << endl;
//    cout << "2. Nhap danh sach tu ban phim." << endl;
//    cout << "3. Xuat danh sach vua nhap." << endl;
//    cout << "4. Xep thu tu selection sort." << endl;
//    cout << "5. Xep thu tu insertional sort" << endl;
//    cout << "6. Xep thu tu bubble sort" << endl;
//    cout << "7. Xep thu tu inserchange sort." << endl;
//    cout << "8. Xep thu tu quick sort." << endl;
//    cout << "9. Xep thu tu heap sort." << endl;
//    cout << "10. Tim kiem phan tu bang phuong phap tim kiem tuan tu." << endl;
//    cout << "11. Tim kiem phan tu bang phuong phap tim kiem nhi phan." << endl;
//    cout << "12. Thoat chuong trinh." << endl;
//    do
//    {
//        cout << "Vui long chon de thuc hien: ";
//        cin >> choice;
//        switch (choice)
//        {
//        case 1:
//            init(a, n);
//            break;
//        case 2:
//            input(a, n);
//            break;
//        case 3:
//            cout << "Danh sach dang co la: " << endl;
//            export_list(a, n);
//            break;
//        case 4:
//            copyarr(a, b, n);
//            start = clock();
//            SelectionSort(b, n);
//            duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//            if (n < 100)
//            {
//                cout << "Danh sach sau khi sap xep voi seclection sort la: " << endl;
//                export_list(b, n);
//            }
//            if (duration > 0)
//            {
//                cout << "Thoi gian seclection sort la: " << duration * 1000000 << " Miliseconds" << endl;
//            }
//            break;
//        case 5:
//            copyarr(a, b, n);
//            start = clock();
//            intertionalSort(b,n);
//            duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//            if (n < 100)
//            {
//                cout << "Danh sach sau khi sap xep voi intertion sort la: " << endl;
//                export_list(b, n);
//            }
//            if (duration > 0)
//            {
//                cout << "Thoi gian intertion sort la: " << duration * 1000000 << " Miliseconds" << endl;
//            }
//            break;
//        case 6:
//            copyarr(a, b, n);
//            start = clock();
//            BubbleSort(b, n);
//            duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//            if (n < 100)
//            {
//                cout << "Danh sach sau khi sap xep voi bubble sort la: " << endl;
//                export_list(b, n);
//            }
//            if (duration > 0)
//            {
//                cout << "Thoi gian bubble sort la: " << duration * 1000000 << " Miliseconds" << endl;
//            }
//            break;
//        case 7:
//            copyarr(a, b, n);
//            start = clock();
//            InterchangeSort(b, n);
//            duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//            if (n < 100)
//            {
//                cout << "Danh sach sau khi sap xep voi interchange sort la: " << endl;
//                export_list(b, n);
//            }
//            if (duration > 0)
//            {
//                cout << "Thoi gian interchange sort la: " << duration * 1000000 << " Miliseconds" << endl;
//            }
//            break;
//        case 8:
//            copyarr(a, b, n);
//            start = clock();
//            QuickSort(b, 0, n - 1);
//            duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//            if (n < 100)
//            {
//                cout << "Danh sach sau khi sap xep voi quick sort la: " << endl;
//                export_list(b, n);
//            }
//            if (duration > 0)
//            {
//                cout << "Thoi gian quick sort la: " << duration * 1000000 << " Miliseconds" << endl;
//            }
//            break;
//        case 9:
//            copyarr(a, b, n);
//            start = clock();
//            HeapSort(b, n);
//            duration = (clock() - start) / (double)CLOCKS_PER_SEC;
//            if (n < 100)
//            {
//                cout << "Danh sach sau khi sap xep voi heap sort la: " << endl;
//                export_list(b, n);
//            }
//            if (duration > 0)
//            {
//                cout << "Thoi gian heap sort la: " << duration * 1000000 << " Miliseconds" << endl;
//            }
//            break;
//        case 10:
//            cout << " Nhap gia tri x can tim: ";
//            cin >> x;
//            i = Search(a,n, x);
//            if (i != -1)
//            {
//                cout << "Tim thay gia tri " << x << " trong danh sach!\n";
//            }
//            else
//                cout << "Khong tim thay gia tri " << x << " trong danh sach!" << endl;
//            break;
//        case 11:
//            cout << "Nhap gia tri x: ";
//            cin >> x;
//            i = BinarySearch(a, n, x);
//            if (i != -1)
//            {
//                cout << "Tim thay gia tri x = " << x << " trong danh sach!\n";
//            }
//            else
//                cout << "Khong tim thay gia tri x = " << x << " trong danh sach!\n";
//            break;
//        case 12:
//            cout << "Thoat chuong trinh!\n";
//            break;
//        }
//    } while (choice != 11);
//    system("pause");
//    return 0;
//}
