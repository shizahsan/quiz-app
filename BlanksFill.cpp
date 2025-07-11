#include"/Users/User/source/repos/string oop/string.h"
#include"Question.h"
#include "BlanksFill.h"
#include <iostream>
using namespace std;
//BlanksFill::
bool BlanksFill::isCorrectAnswer(const String&s)
{
	if (correctoption == s)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void BlanksFill::setCorrectAnswer(const String& opt)
{
	correctoption.concatEqual(opt);
}
String BlanksFill::getCorrectAnswer()
{
	return correctoption;
}
Question* BlanksFill::clone() const
{
	return new  BlanksFill(*this);
}
void BlanksFill::printQuestion()
{
	getQuestion().display();
	cout << ":(" << getMarks() << ")\n";
	cout << "\n";
	
}
void BlanksFill::inputQuestion()
{
	cout << "****************** Fill in the Blanks Storage********************\n";
	cout << "Enter Question Text:";
	String s;
	s.input();
	setQuestion(s);
	cout << "Enter Answer " << ":";
	s.input();
	setCorrectAnswer(s);
	cout << "Enter question marks:";
	int x;
	cin >> x;
	setMarks(x);
	s.~String();
}