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

    string getName();
    string getSurname();
    int getAlbumNumber();
    int getQuestionsNumber();
    int getCorrectAnswers();

    void setName(string name);
    void setSurname(string surname);
    void setAlbumNumber(int albumNumber);
    void setQuestionsNumber(int questionsNumber);
    void setCorrectAnswers(int correctAnswers);

};


#endif //JIPP2_STUDENT_H
