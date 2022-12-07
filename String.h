#include<iostream>
using namespace std;
class String
{
private:
	char* arr;

public:
	String();
	String(const String& str);
	String(const String& str, int pos, int len);
	String(const char* s);
	String(const char* s, int n);
	String(int n, char c);
	int length();
	char at(int i);
	String substr(int pos, int len) const;

	friend ostream& operator<< (ostream& os, const String& str)
	{
		if(str.arr != nullptr)
		os << str.arr << endl;
		return os;
	}

};


