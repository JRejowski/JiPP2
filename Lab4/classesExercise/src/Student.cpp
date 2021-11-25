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

string Student::getName() {
    return name;
}

string Student::getSurname() {
    return surname;
}
int Student::getAlbumNumber() {
    return albumNumber;
}
int Student::getQuestionsNumber() {
    return questionsNumber;
}
int Student::getCorrectAnswers() {
    return correctAnswers;
}

void Student::setName(string name) {
    this->name = name;
}
void Student::setSurname(string surname) {
    this->surname = surname;
}
void Student::setAlbumNumber(int albumNumber) {
    this->albumNumber = albumNumber;
}
void Student::setQuestionsNumber(int questionsNumber) {
    this->questionsNumber = questionsNumber;
}
void Student::setCorrectAnswers(int correctAnswers) {
    this->correctAnswers = correctAnswers;
}