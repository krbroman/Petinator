#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <QString>
#include <ctime>

using namespace std;

class Questions
{
    static const int countOfQuestion = 29;
    static const int countOfAnimals = 36;

private:
    int currenQuestion;
    bool* maskOfUsedQuestions = new bool[countOfQuestion] {0};

public:
    Questions();
    //Все вопросы, где иттератор - ID
    QString questions[countOfQuestion];

    //Все животные, где иттератор - ID
    QString animals[countOfAnimals];

    //Матрица из в стоблик животных и в строчку ответов на них
    int answersForAnimals[countOfAnimals][countOfQuestion];

    //Массив пользовательских ответов
    int* answersFromUsers = new int[countOfQuestion] {2};

    //Массив совпадений
    int countOfСoincidence[countOfAnimals] {0};

    //Массив частоты выбора
    int frequencyOfChoise[countOfAnimals] {1};

    //Метод, который выдает номер очередного нового вопроса.
    int numOfTheNextQuestion();

    static int getCountOfQuestion();
    static int getCountOfAnimals();
};

#endif // QUESTIONS_H
