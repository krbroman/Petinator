#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <QString>
#include <ctime>
#include <vector>

using namespace std;

class Questions
{
    static const int countOfAnimals = 100;
    static const int countOfQuestion = 100;


private:
    int currenQuestion;
    bool* maskOfUsedQuestions = new bool[countOfQuestion] {0};

    int countOfAnimalsTest = 36;
    int countOfQuestionTest = 29;


public:
    Questions();

    //Все вопросы, где иттератор - ID
    QString questions[countOfQuestion];

    //Все животные, где иттератор - ID
    QString animals[countOfAnimals];

    //Матрица из в стоблик животных и в строчку ответов на них??
    int answersForAnimals[countOfAnimals][countOfQuestion];

    //Массив пользовательских ответов
    int answersFromUsers[countOfQuestion];

    //Массив совпадений
    int countOfСoincidence[countOfAnimals];

    //Массив частоты выбора
    int frequencyOfChoise[countOfAnimals];

    //Метод, который выдает номер очередного нового вопроса.
    int numOfTheNextQuestion();

    int getCountOfQuestion();
    int getCountOfAnimals();
};

#endif // QUESTIONS_H
