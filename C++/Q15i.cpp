#include<iostream>
#include<string>
using namespace std;
class string
{
	char string1[50];
	public:
	string()
	{
		strcpy(string1,"");
	}
	string(char s1[])
	{
		strcpy(string1,s1);
	}
	void display()
	{
		cout<<string1<<endl;
	}
	string operator +(string str)
	{
		string temp;
		strcpy(temp.string1,string1);
		strcat(temp.string1,str.string1);
		return temp;
	}
};
void main()
{
	string first="BCA";
	string second="MLP";
	string str;

	first.display();
	second.display();
	//str.display();
	str=first+second;

	cout<<endl<<"concatination";
	str.display();
}