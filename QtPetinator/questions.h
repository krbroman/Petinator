#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <QString>
#include <ctime>

using namespace std;

class Questions
{
    static const int countOfQuestion = 29;

private:
    int currenQuestion;
    bool* maskOfUsedQuestions = new bool[countOfQuestion] {0};

public:
    Questions();
    QString questions[countOfQuestion];
    QString theLastQuestion = "Вопросы закончились :3";

    //Метод, который выдает номер очередного нового вопроса.
    int numOfTheNextQuestion();

    static int getCountOfQuestion();
};

#endif // QUESTIONS_H
