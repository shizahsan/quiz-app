#ifndef TRUEFALSE_H
#define TRUEFALSE_H
#include"/Users/User/source/repos/string oop/string.h"
#include"Question.h"
class TrueFalse : public Question
{
	bool correctOption;
public:
	bool isCorrectAnswer(const String&);
	void setCorrectAnswer(char opt);
	String getCorrectAnswer();
	Question* clone() const;
	void printQuestion();
	void inputQuestion();
};
#endif