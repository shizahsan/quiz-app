#ifndef QUESTIONPOOL_H
#define QUESTIONPOOL_H
#include"Question.h"
#include"Quiz.h"
class QuestionPool
{
	Question **data; 
	int  noOfQuestions;
	int capacity;
public:
	QuestionPool(int cap = 20);
	void addQuestion(const Question&);
	void generateQuiz(Quiz & x,int questCount);
};


#endif 
