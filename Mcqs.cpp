#include"/Users/User/source/repos/string oop/string.h"
#include"Question.h"
#include"Mcqs.h"
// Mcqs::
bool MCQ::isCorrectAnswer(const String& s)
{
	String x{ getCorrectAnswer() };
	return s.compare(x);
}
void MCQ::setOption(const String& s, int optNumber)
{
	options[optNumber].concatEqual(s);

}
void MCQ::setCorrectAnswer(char opt)
{
	if (opt == 'A')
	{
		correctoption = 1;
	}
	else if (opt == 'B')
	{
		correctoption = 2;
	}
	else if (opt == 'C')
	{
		correctoption = 3;
	}
	else if (opt == 'D')
	{
		correctoption = 4;
	}
}
String MCQ::getCorrectAnswer()
{
	if (correctoption==1)
	{
		return "A";
	}
	else if(correctoption == 2)
	{
		return "B";
	}
	else if (correctoption == 3)
	{
		return "C";
	}
	else if (correctoption == 4)
	{
		return "D";
	}
}
Question* MCQ::clone() const
{
	return new MCQ(*this);
}
void MCQ::printQuestion()
{
	getQuestion().display();
	cout << ": (" << getMarks() << ")\n";
	char ch = 'A';
	for (int i = 0;i < 4;i++)
	{
		cout << ch<<".";
		options[i].display();
		cout << "\n";
		ch = ch + 1;
	}
}
void MCQ::inputQuestion()
{
	cout << "****************** MCQ STORAGE********************\n";
	cout << "Enter Question Text:";
	String s;
	s.input();
	setQuestion(s);
	char ch = 'A';
	for (int i = 0;i < 4;i++)
	{
		cout << "Enter Option " << ch << ":";
		s.input();
		options[i].concatEqual(s);
		ch = ch + 1;
	}
	int i = 0;
	while (i == 0)
	{
		cout << "Which option is correct :A:B;C:D ? ";
		cin >> ch;
		if (ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D')
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