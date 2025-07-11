#ifndef BLANKFILLS_H
#define BLANKFILLS_H
#include"/Users/User/source/repos/string oop/string.h"
#include"Question.h"
class BlanksFill : public Question
{
	String correctoption;
public:
	bool isCorrectAnswer(const String&);
	void setCorrectAnswer(const String&);
	String getCorrectAnswer();
	Question * clone() const;
	void printQuestion();
	void inputQuestion();
};

#endif