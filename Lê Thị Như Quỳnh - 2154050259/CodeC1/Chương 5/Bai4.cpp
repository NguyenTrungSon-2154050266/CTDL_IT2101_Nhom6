//#include <iostream>
//#include <stdio.h>
//#include <fstream>
//#include <string>
//using namespace std;
//int const MAX = 1000;
//string A[MAX][MAX];
//int n;
//char vertex[MAX];
//struct Node {
//    int info;
//    Node* link;
//};
//Node* sp;
//Node* front, * rear;
//void InitStrack() {
//    sp = NULL;
//}
//int isEmptyS() {
//    if (sp == NULL) return 1;
//    return 0;
//}
//void PushS(int x) {
//    Node* p = new Node();
//    p->info = x;
//    p->next= sp;
//    sp = p;
//}
//int PopS(int& x)
//{
//    if (sp != NULL)
//    {
//        Node* p = sp; x = p->info;
//        sp = p->link;
//        delete p;
//        return 1;
//    }
//    return 0;
//}
//// end stack 
////QUEUE
//void Initqueue()
//{
//    front = NULL;
//    rear = NULL;
//}
//int isEmptyQ()
//{
//    if (front = NULL)
//        return 1;
//    return 0;
//}
//void PushQ(int x)
//{
//    Node* p = new Node;
//    p->info = x;;
//    p->next= NULL;
//    if (front == NULL)
//        front = p;
//    else
//        rear->next= p;
//    rear = p;
//}
//int PopQ(int& x)
//{
//    if (front != NULL)
//    {
//        Node* p = front;
//        front = p->link;
//        x = p->info;
//        if (front == NULL)
//        {
//            rear = NULL;
//        }
//        delete p;
//        return 1;
//    }
//    return 0;
//}
////END QUEUE
//void InitGraph()
//{
//    n = 0;
//
//}
////4.1 Viet ham nhap ma tran ke cua do thi
//void inputGraph()
//{
//    cout << " nhap so dinh do thi n: ";
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cout << " Nhap ten dinh: ";
//        cin >> vertex[i];
//        cout << " Nhap vao dong thu " << i + 1 << " :";
//        for (int j = 0; j < n; j++)
//            cin >> A[i][j];
//    }
//}
//// Nhap MTk tu file TXT
//void inputGraphFromText() {
//    string file;
//    ifstream myfile("mtk1.txt");
//    if (myfile.is_open())
//    {
//        myfile >> n;
//        for (int i = 0; i < n; i++)
//            myfile >> vertex[i];
//        for (int i = 0; i < n; i++)
//            for (int j = 0; j < n; j++)
//            {
//                myfile >> A[i][j];
//            }
//    }
//}
//// Cau 4.2 Xuat MTK
//void outputGraph()
//{
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//            cout << A[i][j] << " ";
//        cout << endl;
//    }
//}
//void output(int a[], int n)
//{
//    for (int i = 0; i < n; i++)
//        cout << vertex[a[i]] << " ";
//}
//// cau4.3 Duyet BFS(QUEUE)
//int C[100], bfs[100];
//int nbfs = 0;
//void InitC()
//{
//    for (int i = 0; i < n; i++)
//        C[i] = 1;
//
//}
//void BFS(int v)
//{
//    int w, p;
//    PushQ(v);
//    C[v] = 0;
//    while (front != NULL)
//    {
//        PopQ(p);
//        bfs[nbfs] = p;
//        nbfs++;
//        for (w = 0; w < n; w++)
//            if (C[w] && A[p][w] == 1)
//            {
//                PushQ(w);
//                C[w] = 0;
//            }
//    }
//}
//// Cau 4.4 Duyet DFS ( STACK)
//int dfs[100];
//int ndfs = 0;
//void DFS(int s)
//{
//    PushS(s);
//    dfs[ndfs] = s;
//    ndfs++;
//    C[s] = 0;
//    int v = -1, u = s;
//    while (isEmptyS() == 0)
//    {
//        if (v == n)
//            PopS(u);
//        PushS(v);
//        dfs[ndfs] = v;
//        ndfs++;
//        C[v] = 0;
//        u = v;
//        break;
//    }
//}
//// 4.5
//void Search_by_BFS(int x, int v)
//{
//    int w, p;
//    PushQ(v);
//    C[v] = 0;
//    while (front != NULL)
//    {
//        PopQ(p);
//        if (x == p)
//        {
//            cout << "Tim thay x=" << x << endl;
//            return;
//        }
//        for( int w =0; w < n; w++)
//            if (C[w] && A[p][w] == 1)
//            {
//                PushQ(w);
//                C[w] = 0;
//            }
//    }
//}
//int main()
//{
//    int a[MAX], b[MAX];
//    int choice, sp, sp_b, x, i;
//    system("cls");
//    cout << "-------Do thi-------" << endl;
//    cout << "1. Khoi tao MA TRAN KE rong. " << endl;
//    cout << "2. Nhap MA TRAN KE tu file text. " << endl;
//    cout << "3. Nhap MA TRAN KE. " << endl;
//    cout << "4. Xuat MA TRAN KE. " << endl;
//    cout << "5. Duyet do thi theo chieu rong BFS - DSLK. " << endl;
//    cout << "6. duyet do thi theo chieu sau BFS - DSLK. " << endl;
//    cout << "7. Tim dinh co gia tri x theo BFS. " << endl;
//    cout << "8. Thoat. " << endl;
//    do
//    {
//        cout << " Vui long chon chuc nang: ";
//        cin >> choice;
//        switch (choice)
//        {
//        case 1:
//            InitGraph();
//            cout << "Ban vua khoi tao thanh cong MA TRAN KE rong thanh cong." << endl;
//            break;
//        case 2:
//            inputGraphFromText();
//            cout << "Ban vua nhap MA TRAN KE tu file: " << endl;
//            outputGraph();
//            break;
//        case 3:
//            inputGraph();
//            break;
//        case 4:
//            outputGraph();
//            break;
//        case 5:
//            Initqueue();
//            InitC();
//            cout << "Vui long nhap dinh xuat phat: ";
//            cin >> x;
//            BFS(x);
//            cout << "Thu tu dinh sau khi duyet BFS: " << endl;
//            output(bfs, n);
//            break;
//        case 6:
//            Initqueue();
//            InitC();
//            cout << "Vui long nhap dinh xuat phat: ";
//            cin >> x;
//            ndfs = 0;
//            cout << "Thu tu dinh sau khi duyet DFS: " << endl;
//            output(dfs, n);
//            break;
//        case 7:
//            cout << " Vui long nhap gia tri x can tim : " << endl;
//            cin >> x;
//            Search_by_BFS(x, 0);
//            break;
//        case 8:
//            cout << " Thoat chuong trinh! " << endl;
//            break;
//        default:
//            break;
//        }
//    } while (choice != 8);
//    system("pause");
//    return 0;
//}