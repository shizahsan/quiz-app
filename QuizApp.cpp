#include"QuizApp.h"
#include<iostream>
using namespace std;
#include"Question.h"
#include"Mcqs.h"
#include"BlanksFill.h"
#include"TrueFalse.h"
#include"Quiz.h"
#include "QuestionPool.h"
void QuizApp::startApp()
{
	QuestionPool qP;
	int choice=1;
	while (choice != 0)
	{
		cout << "****************************QUIZ APP*****************************\n";
		cout << "Enter 1 to store question in Question Data Bank\n      2 to Print Quiz\n      3 to attempt Quiz\n";
		cout << "      0 to exit......................................:";
		cin >> choice;
		if (choice == 1)
		{
			cout << "**********************Questions Data Bank*******************************\n";
			cout << "Enter 1 to add MCQ\n      2 to add True/False\n      3 to add Fill in the Blank\n";
			cout << "      4 to return Main _Menu/Quiz App\n";
			int x;
			cin >> x;
			if (x == 1)
			{
				
				char ch='\n';
				while (ch == '\n')
				{
					MCQ m1;
					cin.ignore(1);
					m1.inputQuestion();
					qP.addQuestion(m1);
					cout << "Press enter to add more MCQs Or any other key to return to Main Menu:";
					cin.ignore();
					cin.get(ch);
				}
			}
			else if (x == 2)
			{
				char ch = '\n';
				while (ch == '\n')
				{
					TrueFalse m1;
					cin.ignore();
					m1.inputQuestion();
					qP.addQuestion(m1);
					cout << "Press enter to add more True/False Or any other key to return to Main Menu:";
					cin.ignore();

					cin.get(ch);

				}
			}
			else if (x == 3)
			{
				char ch = '\n';
				while (ch == '\n')
				{

					BlanksFill m1;
					cin.ignore();
					m1.inputQuestion();
					qP.addQuestion(m1);
					cout << "Press enter to add more fill in the Blank Or any other key to return to Main Menu:";
					cin.ignore();

					cin.get(ch);

				}
			}

		}
		else if (choice ==2||choice==3 )
		{
			int num;
			cout << "Enter the count of questions you need in Quiz:";
			cin >> num;
			Quiz q;
			qP.generateQuiz(q,num);
			if (choice == 2)
			{
				q.printQuiz();
				cout << "\n";

			}
			else
			{
				cout << "****************Quiz in Progress***************************\n";
				String h = "\n";
				String s;
				int i = 0;
				while (!q.isQuizFinished())
			    {
						q.showCurrentQuestion();
						cout << "\nEnter your Choice Or Simply enter to delay it:";
						if (i == 0)
						{
							cin.ignore();
						}
						s.input();
						if (s.compare(h) == 0)
						{
							cout << "yes enteref\n";
							q.delayQuestion();
						}
						else
						{
							q.setAnswerForCurrentQuestion(s);
							q.nextQuestion();

						}
						i++;
				}
				cout << "\nQuiz Finished: Your Marks are:" << q.getobtainedMarks() << "/" << q.getMaximumMarks();
			}
		}
	}
	
}