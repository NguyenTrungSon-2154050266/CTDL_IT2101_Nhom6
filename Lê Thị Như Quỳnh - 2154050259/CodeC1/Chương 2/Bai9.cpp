//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//class tower{
//private:
//	int top;
//	char data[20];
//public:
//	tower();
//	void push(char);
//	char pop();
//	//void display(int);
//};
//
//tower::tower()
//{
//	top = -1;
//}
//
//void tower::push(char x)
//{
//	if (top < 20)
//	{
//		data[++top] = x;
//	}
//}
//
//char tower::pop()
//{
//	top--;
//	return data[top];
//}
//
////void tower::display(int tag)
////{
////	cout << "---------------------------" << endl;
////	cout << setw(2) << tag + 1 << " |";
////	for (int i=0; i<top; i++)
////		cout << data[i] << " ";
////	cout << endl; 
////}
//
//void move(int, int, int, int);
////void show();
//
////bool graphic;
//tower x[3];
//
//int main()
//{
//	char fill[] = "ABCDEFGHIJKLMNOP";
//	int n;
//	char choice;
//
//	cout << "Nhap So dia: ";
//	cin >> n;
//	//cout << "Hien bieu do?(C/K) : ";
//	//cin >> choice;
//	//graphic = (choice == 'C' || choice == 'c');
//
//	for (int i=n; i>0; i--)
//		x[0].push(fill[i]);
//
//	//cout << "Bieu do ban dau " << endl;
//	//show();
//
//	move(n, 1, 3, 2);
//	//cout << "\nBieu do sau cung " << endl;
//	//show();
//
//	system("pause");
//	return 0;
//}
//
//void move(int n, int from, int to, int temp)
//{
//	if (n == 0) return;
//	move(n-1, from, temp, to);
//	cout << "Di chuyen tu " << from << " sang " << to << endl;
//	x[to-1].push(x[from-1].pop());
//	//if (graphic) show();
//	move(n-1, temp, to, from);
//}
////void show()
////{
////	for (int i=0; i<3; i++)
////		x[i].display(i);
////	cout << "-------------------------" << endl;
////	cout << endl << endl;
////}