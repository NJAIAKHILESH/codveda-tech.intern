#include<iostream>
#include<cstring>
using namespace std;
void reversestring(char str[])
{
	int len= strlen(str);
	for(int i=0;i<len/2;i++)
	{swap(str[i],str[len-i-1]);
	}
}
int countvowels(const char str[])
{
	int count=0;
	for(int i=0; str[i] !='\0';i++)
	{
		char ch=tolower(str[i]);
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		count++;
	}
	}
	return count;
}
bool ispalindrome(const char str[])
{
	int len=strlen(str);
	for(int i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	char str[100];
	cout<<"enter a string"<<endl;
	cin.getline(str,100);
	char reversedstr[100];
	strcpy(reversedstr, str);
	reversestring(reversedstr);
	cout<<"reversed string:"<<reversedstr<<endl;
	cout<<"number of vowels:"<<countvowels(str)<<endl;
	if (ispalindrome(str))
	{
		cout<<"the string is palindrome."<<endl;
	}
	else
	{
	cout<<"the string is not a palindrome."<<endl;	
	}
	return 0;
}
