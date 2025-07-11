#ifndef MCQS_H
#define MCQS_H
#include"/Users/User/source/repos/string oop/string.h"
#include"Question.h"
class MCQ :public Question
{
	String options[4];
	int correctoption;
public:
	bool isCorrectAnswer(const String&);
	void setOption(const String&, int optNumber);
	void setCorrectAnswer(char opt);
	String getCorrectAnswer();
	Question * clone() const;
	void printQuestion();
	void inputQuestion();
};


#endif