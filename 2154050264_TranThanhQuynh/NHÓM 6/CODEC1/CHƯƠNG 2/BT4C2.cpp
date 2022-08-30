//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//#define MAX 100
//
//void input(int a[], int& n);
//
//void output(int a[], int n);
//
//void InsertAuto(int a[], int& pos, int& value, int& n);
//
//void xuatPT4(int a[], int& n);
//
//int main()
//{
//    int value, pos, n, chon;
//    int a[MAX];
//    bool in = false;
//
//    while (true)
//    {
//        system("cls");
//        cout << "0. THOAT" << endl
//            << "1. NHAP DANH SACH" << endl
//            << "2. XUAT DANH SACH" << endl
//            << "3. CHEN PHAN TU VAO VI TRI CAN NHAP VAO" << endl
//            << "4. XUAT DANH SACH CAC PHAN TU CHIA HET CHO 4" << endl
//            << "Ban chon: ";
//        cin >> chon;
//        switch (chon)
//        {
//        case 0:
//            cout << "Ban chon ket thuc chuong trinh!" << endl;
//            return 1;
//            break;
//        case 1:
//            input(a, n);
//            in = true;
//            break;
//        case 2:
//            if (in)
//            {
//                output(a, n);
//            }
//            else
//                cout << "Vui long nhap danh sach\n";
//            break;
//        case 3:
//            if (in)
//            {
//                InsertAuto(a, pos, value, n);
//                output(a, n);
//            }
//            else
//                cout << "Vui long nhap danh sach\n";
//            break;
//        case 4:
//            if (in)
//            {
//                cout << "Cac phan tu chia het cho 4 la: ";
//                xuatPT4(a, n);
//            }
//            else
//                cout << "Vui long nhap danh sach\n";
//            break;
//        default:
//            cout << "Gia tri chon khong hop le!" << endl;
//        }
//        _getch();
//    }
//    return 0;
//}
//
//void input(int a[], int& n)
//{
//    do {
//        cout << "Nhap so luong phan tu: ";
//        cin >> n;
//    } while (n <= 0 || n > MAX);
//    for (int i = 0; i < n; i++)
//    {
//        cout << "Nhap a[" << i << "]: ";
//        cin >> a[i];
//    }
//}
//
//void output(int a[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << a[i] << "\t";
//    }
//}
//
//void InsertAuto(int a[], int& pos, int& value, int& n)
//{
//    do {
//        cout << "Nhap vao vi tri: ";
//        cin >> pos;
//    } while (pos < 0 || pos > n);
//    cout << "Nhap vao gia tri: ";
//    cin >> value;
//    for (int i = n; i > pos; i--)
//    {
//        a[i] = a[i - 1];
//    }
//    a[pos] = value;
//    n++;
//}
//
//void xuatPT4(int a[], int& n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        if (a[i] % 4 == 0)
//        {
//            cout << a[i] << endl;
//        }
//    }
//}
//
