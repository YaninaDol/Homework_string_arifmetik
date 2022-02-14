#include "Arifmetik.h"


int main()
{
	setlocale(LC_ALL, "rus");
	
	string str ;
	cout << " Введите строку для исчисления : ";
	getline(cin, str);


	Arifmetik A;
	
	if(str.find("(") < str.length())
	{
		
		size_t pos = 0;
		int pos1 = 0;
		int pos2 = 0;
		

		pos = str.find("(");
		pos1 = pos;
		pos2= str.find(")");
		string str1 = str.substr(pos1+1, pos2-1);
		
		str1 = A.Arifmetika(str1);
		cout << " Результат в скобках : " << str1<<endl;

		str.replace(pos1,( pos2 - pos1)+1, str1);
		
	}
	
	str=A.Arifmetika(str);
	cout<<"\n Общий результат : " << str;

}

