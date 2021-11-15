#include <iostream>
using namespace std;
int tong(int a, int b)
{
	return a + b;
}
int hieu(int a, int b)
{
	return a-b;
}
int tich(int a, int b)
{
	return a*b;
}
int ktchanle(int a)
{
	if(a%2==0)
		return 1;
	else
		return 0;
}
int main()
{
	int a, b, ktcl;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,*) ";
	cin >> phepToan;
	ktcl = ktchanle(a);
	if(ktcl ==1)
		cout<<"a la so chan"<<endl;
	else
		cout<<"a la so le"<<endl;

	if(phepToan == "-")
		cout<<"Hieu 2 so = "<<hieu(a, b)<<endl;

	if(phepToan == "+")
		cout<<"Tong 2 so = "<<tong(a, b)<<endl;

	if(phepToan == "*")
		cout<<"Tich 2 so = "<<tich(a, b)<<endl;
	cout<<endl;
//Cau 19
	system("pause");
	return 0;
}