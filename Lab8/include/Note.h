//
// Created by Admin on 07.01.2022.
//

#ifndef JIPP2_NOTE_H
#define JIPP2_NOTE_H

#include <iostream>

using namespace std;

class Note {
private:
    string title;
public:
    string getTitle();
    void setTitle(string title);
    virtual string getContent() = 0;
    virtual void setContent(string) = 0;
};


#endif //JIPP2_NOTE_H
