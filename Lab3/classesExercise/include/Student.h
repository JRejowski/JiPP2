//
// Created by Yonasz on 06.11.2021.
//

#ifndef JIPP2_STUDENT_H
#define JIPP2_STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
  string name;
  string surname;
  int albumNumber;
  int questionsNumber;
  int correctAnswers;
public:
    Student(string name, string surname, int albumNumber, int questionsNumber, int correctAnswers);
    double howManyGoodAnswers();
};


#endif //JIPP2_STUDENT_H
