#ifndef QUIZ_H
#define QUIZ_H
#include <iostream>
using namespace std;
#include"/Users/User/source/repos/string oop/string.h"

class Quiz
{
	Question ** data;
	String userAnswer;
	int obtainedMarks = 0;
	int maximumMarks = 0;
	int noOfQuestions;
	int currentQuestion = 0;
	void markQuestion();
public:
	int getobtainedMarks();
	int getMaximumMarks();
	void setMaximumMarks(int);
	void populateQuiz(Question **p, int qCount);
	void setAnswerForCurrentQuestion(const String& ans);
	void printQuiz();
	void nextQuestion();
	void showCurrentQuestion();
	bool isQuizFinished();
	void delayQuestion(); 
};
#endif 
