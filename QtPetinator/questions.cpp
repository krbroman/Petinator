#include "questions.h"

Questions::Questions()
{
query.qu.exec("Select \"Частота загадывания\" from Chances order by ID");
   for(int i = 0; i < countOfAnimalsTest; ++i)
   {
       query.qu.next();
    frequencyOfChoise[i] = query.qu.value(0).toInt();
   }

   query.qu.exec("Select \"Question\" from Indexes order by \"Index\"");
      for(int i = 0; i < countOfQuestionTest; ++i)
      {
          query.qu.next();
       questions[i] = query.qu.value(0).toString();
       if(questions[i] == "Я больше или равен средней собаки?")
           questions[i] = "Я больше собаки?";
       if(questions[i] == "Я обычно с гладкой шерстью?")
           questions[i] = "Я с гладной шерстью?";
       if(questions[i] == "Оно лазает по деревьям?")
           questions[i] = "Я лазаю по деревьям?";
      }

      query.qu.exec("Select \"Животное\" from Questions order by ID");
         for(int i = 0; i < countOfAnimalsTest; ++i)
         {
             query.qu.next();
          animals[i] = query.qu.value(0).toString();
         }
}

int Questions::numOfTheNextQuestion() {
    srand(time(NULL));
    while (true) {
        currenQuestion = rand() % this->getCountOfQuestion();
        if (maskOfUsedQuestions[currenQuestion] == 0) {
            maskOfUsedQuestions[currenQuestion] = 1;
            break;
        }
    }
    return currenQuestion;
}

int Questions::getCountOfQuestion() {
    return countOfQuestionTest;
}

int Questions::getCountOfAnimals() {
    return countOfAnimalsTest;
}
