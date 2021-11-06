//
// Created by Yonasz on 06.11.2021.
//

#include "../include/Student.h"

Student::Student(string name, string surname, int albumNumber, int questionsNumber, int correctAnswers)
:name(name),surname(surname),albumNumber(albumNumber),questionsNumber(questionsNumber),correctAnswers(correctAnswers)
{
}

double Student::howManyGoodAnswers() {
    return 100*(double)correctAnswers/(double)questionsNumber;
}
