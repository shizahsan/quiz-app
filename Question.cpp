#include"/Users/User/source/repos/string oop/string.h"
#include"Question.h"
#include<iostream>
using namespace std;
//Question::
void Question::setQuestion(const String& temp, int num )
{
	this->question.~String();
	question.concatEqual(temp);
	marks = num;
}
String Question::getQuestion()
{
	return question;
}
int Question::getMarks()
{
	return marks;
}
void Question::setMarks(int m)
{
	if (m >= 0)
	{
		marks = m;
	}
}
//bool Question::isCorrectAnswer(const String&)
//{
//
//}

//virtual String Question::getCorrectAnswer() = 0;
//virtual Question* Question::clone() const = 0;
//virtual void Question::printQuestion() = 0;
//virtual void Question::inputQuestion() = 0;