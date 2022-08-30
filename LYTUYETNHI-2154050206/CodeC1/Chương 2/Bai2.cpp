#include<iostream>
#include<stdio.h>
using namespace std;
struct Stack
{
	int info;
	Stack *link;
};
Stack *sp;
void init()
{
	sp == NULL;
	cout<<"Da khoi tao Stack rong thanh cong!" << endl;
}
int isEmpty()
{
	if(sp == NULL)
	return 0;
	else return 1;
}
void push(int x)
{
	Stack *q = new Stack;
	q->info =x;
	q->link =NULL;
	if(sp == NULL)
	sp =q;
	else{
		Stack *p = sp;
		while(p->link!=NULL)
		p=p->link;
		p->link = q;
	}
	cout <<"Da them phan tu x="<<x<<"vao Stack thanh cong! "<< endl;
}
void xuat()
{
	Stack *p =sp;
	while(p!=NULL)
	{
		cout<<p->info<<"<--";
		p = p->link;
		
	}
	cout << endl;
}
void chuyendoi(int n)
{
	Stack *p = new Stack;
	int i=0, dem =0;
	while(n>0)
	{
		i=i+(int)pow(10.0,dem)*(n%2);
		n/=2;
		dem++;
	}
	push(i);
	xuat();
}
int main()
{
	cout <<"-------DANH SACH CAU LENH-------"
	       <<"\n1.Khoi tao Stack rong"
	       <<"\n2.Kiem tra Stack rong"
	       <<"\n3.Them 1 phan tu vao Stack"
	       <<"\n4.Chuyen doi he nhi phan Stack"
	       <<"\n5.Thoat"<<endl;
	       int choice;
	       do
	       {
	       	  cout <<" Vui long chon so de thuc hien:";
	       	  cin >> choice;
	       	  switch(choice)
	       	  {
	       	  	case 1:
	       	  		init();
	       	  		break;
	       	  	case 2:
					  if(isEmpty() == 0)	
					  cout <<"Stack rong!"<< endl;
					  else 
					      cout <<"Stack khong rong!" << endl;
					      break;
				case 3:
				      int x;
					  cout <<"Nhap phan tu can them vao Stack:";
					  cin >> x;
					  push(x);
					  xuat();
					  break;
				case 4:
				int n;
				cout<<"Nhap phan tu can doi: ";
				cin >> n;
				chuyendoi(n);
				break;
				case 5:
				cout << "\nGoodBye....!";
				break;
				default:
				      break;	
					  	      
			  }
		   }while(choice !=5);
		   return 0;
	       
}
