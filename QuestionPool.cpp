#include"QuestionPool.h"
#include <iostream>
using namespace std;
#include"Question.h"
QuestionPool::QuestionPool(int cap ):capacity(cap),noOfQuestions(0)
{
	data = new Question * [cap];
}
void QuestionPool::addQuestion(const Question& q)
{
	
	if (noOfQuestions == capacity)
	{
		Question ** temp=new Question* [capacity + 10 ];
		for (int i = 0;i < capacity;i++)
		{
			temp[i] = data[i];
		}
		
		delete[] data;
		data = temp;
		capacity = capacity + 10;
	}
	//cout << "entersed";
	(data)[noOfQuestions] = q.clone();
	noOfQuestions = noOfQuestions + 1;
	//cout << "cap" << capacity << "\n";
	//cout << "noq" << noOfQuestions << "\n";
 //   (data)[noOfQuestions-1]->printQuestion();
}

void QuestionPool::generateQuiz(Quiz&x, int  questCount)
{
	x.populateQuiz(data, questCount);
}
