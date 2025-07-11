#include"QuestionPool.h"
#include <iostream>
using namespace std;
#include"/Users/User/source/repos/string oop/string.h"
#include"Quiz.h"
//Quiz::
int Quiz::getobtainedMarks()
{
	return obtainedMarks;
}
int Quiz::getMaximumMarks()
{
	return maximumMarks;
}
void Quiz::setMaximumMarks(int m)
{
	maximumMarks = m;
}
void Quiz::markQuestion()
{
	if (data[currentQuestion]->isCorrectAnswer(userAnswer)==0)
	{
		obtainedMarks = obtainedMarks + data[currentQuestion]->getMarks();
	}

}
void Quiz::populateQuiz(Question** p, int qCount)
{
	if (noOfQuestions > qCount)
	{
		cout << "NO OF QUESTION ARE GREATER THAN QUESTION IN POOL\n";
		return;
	}
	maximumMarks = 0;
	for (int i = 0;i < noOfQuestions;i++)
	{
		delete data[i];
	}
	delete[]data;
	data = new Question * [qCount];
	for (int i = 0;i < qCount;i++)
	{
		data[i] = (p)[i]->clone();
		maximumMarks=data[i]->getMarks()+ maximumMarks;
	}
	noOfQuestions = qCount;
	/*showCurrentQuestion();
	String s;
	setAnswerForCurrentQuestion(s);*/


}
void Quiz::setAnswerForCurrentQuestion(const String& ans)
{
	userAnswer.~String();
	userAnswer.concatEqual(ans);
	markQuestion();
}
void Quiz::printQuiz()
{
	for (int i = 0;i < noOfQuestions;i++)
	{
		cout << i + 1 << ".";
		(data)[i]->printQuestion();
		cout << "\n";
	}
}
void Quiz::nextQuestion()
{
	currentQuestion = currentQuestion + 1;
}
void Quiz::showCurrentQuestion()
{
	(data)[currentQuestion]->printQuestion();
}
bool Quiz::isQuizFinished()
{
	if (currentQuestion == noOfQuestions)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void Quiz::delayQuestion()
{
	Question*p= data[currentQuestion];
	int i = currentQuestion+1;
	for (;i < noOfQuestions-1 &&i>=0;i++)
	{
		cout<<i<<"\n";
		(data)[i] = (data)[i + 1];
	}
	(data)[i] = p;
}