#include"/Users/User/source/repos/string oop/string.h"
#include"Question.h"
#include"TrueFalse.h"
#include <iostream>
using namespace std;

//TrueFalse::
bool TrueFalse::isCorrectAnswer(const String& s)
{
	if (s== "A")
	{
		return true;
	}
	else
	{
		return false;
	}

}
void TrueFalse::setCorrectAnswer(char opt)
{
	if (opt == 'A')
	{
		correctOption = 1;
	}
	else
	{
		correctOption = 0;
	}
}
String TrueFalse::getCorrectAnswer()
{
	if (correctOption = 1)
	{
		return "A";
	}
	else if(correctOption = 0)
	{
		return "B";
	}

}
Question* TrueFalse::clone() const
{
	return new  TrueFalse(*this);
}
void TrueFalse::printQuestion()
{
	getQuestion().display();
	cout << ": (" << getMarks() << ")\n";
	char ch = 'A';
	cout << ch << ".";
	cout << "True\n";
	ch = ch + 1;
	cout << ch << ".";
	cout << "False\n";
}
void TrueFalse::inputQuestion()
{
	cout << "****************** True/False STORAGE********************\n";
	cout << "Enter Question Text:";
	String s;
	s.input();
	setQuestion(s);
	char ch = 'A';
	cout << ch << ".";
	cout << "True\n";
	ch = ch + 1;
	cout << ch << ".";
	cout << "False\n";
	int i = 0;
	while (i == 0)
	{
		cout << "Which option is correct :A:B ? ";
		cin >> ch;
		if (ch == 'A' || ch == 'B')
		{
			setCorrectAnswer(ch);
			i = 1;
		}
		else
		{
			cout << "incorrect option";//ask about it
		}

	}
	
	cout << "Enter question marks:";
	int x;
	cin >> x;
	setMarks(x);
	s.~String();
}