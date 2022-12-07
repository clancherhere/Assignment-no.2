#include "String.h"

String::String()
{
	
	arr = nullptr;
}

String::String(const String& str)
{
	int len = 0;

	while (1)
	{
		if (str.arr[len] == '\0')
			break;

		len++;
	}

	arr = new char[len + 1];

	for (int i = 0; i < len; i++)
	{
		arr[i] = str.arr[i];
	}

	arr[len] = '\0';
}

String::String(const String& str, int pos, int len)
{
	arr = new char[len + 1];

	int j = pos;
	for (int i = 0; i < len; i++)
	{
		arr[i] = str.arr[j];
		j++;
	}
	arr[len] = '\0';
}
String::String(const char* s)
{
	int len = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	arr = new char[len + 1];

	for (int i = 0; i < len; i++)
	{
		arr[i] = s[i];
	}
	arr[len] = '\0';
}
String::String(const char* s, int n)
{
	arr = new char[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = s[i];
	}
	arr[n] = '\0';
}

String::String(int n, char c)
{
	arr = new char[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = c;
	}
	arr[n] = '\0';
}

int String::length()
{
	int len = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		len++;
	}
	return len;
}

char String::at(int i)
{
	return arr[i];
}

String String::substr(int pos, int len) const
{
	String temp;
	
	temp.arr = new char[len];

	int j = pos;
	for (int i = 0; i < len; i++)
	{
		temp.arr[i] = arr[j];
		j++;
	}
	temp.arr[len] = '\0';

	return temp;
}
