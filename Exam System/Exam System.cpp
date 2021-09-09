#include<iostream>
#include<cstring>
using namespace std;
void ReadPassWord(char PassWord[])
{
	char Ch;
	int i = 0;
	while ((Ch = getchar()) != 13)
	{
		//ignore function keys and Arrows.
		if (Ch == 0 || Ch == -32)
		{
			Ch = getchar();
			continue;
		}
		if (Ch == 8)//to enable to use backspace to delete character of password
		{
			if (i > 0) {
				cout << "\b \b";
				i--;
			}

		}
		else
		{
			if (Ch >= 32 && Ch <= 126)
			{
				PassWord[i] = Ch;
				cout << "*";
				i++;
			}
		}
		PassWord[i] = NULL;

	}
}
int main()
{
	char UserLogin[20];
	char PassWord[10];
	cout << "UserLogin:";
	cin >> UserLogin;
	cout << "PassWord:";
	ReadPassWord(PassWord);
	cout << "UserLogin = " << UserLogin << "\t\t" << "Password = " << PassWord << endl;
	return 0;
}