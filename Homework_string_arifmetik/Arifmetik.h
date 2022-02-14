#include <iostream>
#include <string>

using namespace std;
#include <iostream>
#include <string>

using namespace std;

class Arifmetik
{
private:
	string str;

public:


	string Arifmetika(string stroka)

	{

			this-> str = stroka;
			string num1;
			string num2;
			string::iterator it = str.begin();

			int index = 0;
			while (str.find("*", index) < str.length())
			{

				string num1;
				string num2;
				size_t pos = 0;
				int res = 0;
				int pos1 = 0;
				int pos2 = 0;
				int index = 0;

				pos = str.find('*');
				pos1 = pos;

				string str1 = str.substr(0, pos);
				int f;
				string::reverse_iterator rit = str1.rbegin();

				for (int i = str1.length(); i > 0; i--)
				{
					f = 0;
					if (*rit != '+' && *rit != '-' && *rit != '/' && *rit != '*')
					{
						num1 += *rit;
						pos1--;
						f = 1;
					}

					if (f == 0)
					{
						break;
					}
					rit++;

				}
				reverse(num1.begin(), num1.end());
				string str2 = str.substr(pos + 1, str.length());
				pos2 = pos + 1;
				string::iterator it2 = str2.begin();
				for (int i = 0; i < str2.length(); i++)
				{
					f = 0;
					if (*it2 != '+' && *it2 != '-' && *it2 != '/' && *it2 != '*')
					{
						num2 += *it2;
						pos2++;
						f = 1;
					}

					if (f == 0)
					{
						break;
					}
					it2++;
				}



				res = atoi(num1.c_str()) * atoi(num2.c_str());


				str.replace(pos1, pos2 - pos1, std::to_string(res));
				

				index++;

			}
			index = 0;
			while (str.find("/", index) < str.length())
			{
				
				string num1;
				string num2;
				size_t pos = 0;
				int res = 0;
				int pos1 = 0;
				int pos2 = 0;
				int index = 0;

				pos = str.find('/');

				pos1 = pos;
				string str1 = str.substr(0, pos);
				int f;
				string::reverse_iterator rit = str1.rbegin();

				for (int i = str1.length(); i > 0; i--)
				{
					f = 0;
					if (*rit != '+' && *rit != '-' && *rit != '/')
					{
						num1 += *rit;
						pos1--;
						f = 1;
					}

					if (f == 0)
					{
						break;
					}
					rit++;
				}
				reverse(num1.begin(), num1.end());
				string str2 = str.substr(pos + 1, str.length());
				pos2 = pos + 1;
				string::iterator it2 = str2.begin();
				for (int i = 0; i < str2.length(); i++)
				{
					f = 0;
					if (*it2 != '+' && *it2 != '-' && *it2 != '/')
					{
						num2 += *it2;
						pos2++;
						f = 1;
					}

					if (f == 0)
					{
						break;
					}
					it2++;
				}


				res = atoi(num1.c_str()) / atoi(num2.c_str());


				str.replace(pos1, pos2 - pos1, std::to_string(res));
				

				index++;

			}

			index = 0;
			while (str.find("+", index) < str.length())
			{

				string num1;
				string num2;
				size_t pos = 0;
				int res = 0;
				int pos1 = 0;
				int pos2 = 0;
				int index = 0;
				pos = str.find('+');

				pos1 = pos;
				string str1 = str.substr(0, pos);
				int f;
				string::reverse_iterator rit = str1.rbegin();

				for (int i = str1.length(); i > 0; i--)
				{
					f = 0;
					if (*rit != '+' && *rit != '-')
					{
						num1 += *rit;
						pos1--;
						f = 1;
					}

					if (f == 0)
					{
						break;
					}
					rit++;
				}
				reverse(num1.begin(), num1.end());
				string str2 = str.substr(pos + 1, str.length());
				pos2 = pos + 1;
				string::iterator it2 = str2.begin();
				for (int i = 0; i < str2.length(); i++)
				{
					f = 0;
					if (*it2 != '+' && *it2 != '-')
					{
						num2 += *it2;
						pos2++;
						f = 1;
					}

					if (f == 0)
					{
						break;
					}
					it2++;
				}


				res = atoi(num1.c_str()) + atoi(num2.c_str());


				str.replace(pos1, pos2 - pos1, std::to_string(res));
				

				index++;

			}






			index = 0;
			while (str.find("-", index) < str.length())
			{

				string num1;
				string num2;
				size_t pos = 0;
				int res = 0;
				int pos1 = 0;
				int pos2 = 0;
				int index = 0;
				pos = str.find('-');

				pos1 = pos;
				string str1 = str.substr(0, pos);
				int f;
				string::reverse_iterator rit = str1.rbegin();

				for (int i = str1.length(); i > 0; i--)
				{
					f = 0;
					if (*rit != '-')
					{
						num1 += *rit;
						pos1--;
						f = 1;
					}

					if (f == 0)
					{
						break;
					}
					rit++;
				}
				reverse(num1.begin(), num1.end());
				string str2 = str.substr(pos + 1, str.length());
				pos2 = pos + 1;
				string::iterator it2 = str2.begin();
				for (int i = 0; i < str2.length(); i++)
				{

					f = 0;
					if (*it2 != '-')
					{
						num2 += *it2;
						pos2++;
						f = 1;
					}

					if (f == 0)
					{
						break;
					}
					it2++;
				}


				res = atoi(num1.c_str()) - atoi(num2.c_str());


				str.replace(pos1, pos2 - pos1, std::to_string(res));
				
				if (res > 0)
				{
					index++;
				}
				else break;

			}
			return str;
		}



};

