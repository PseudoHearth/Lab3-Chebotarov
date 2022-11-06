#include"Money.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	Money Money1;
	Money Money2;
	Money X;
	Money1 = Money1.Init(15, 75, 100);
	Money2 = Money2.Init(6, 30, 100);
	X = Money1;
	Money1.toString();
	Money2.toString();
	Money1.result(Money1.sum(Money2));
	Money1.Display();
	Money1 = X;
	Money1.result(Money1.sub(Money2));
	Money1.Display();
	Money1 = X;
	Money1.comparison(Money2);
	system("pause");
	return 0;

}