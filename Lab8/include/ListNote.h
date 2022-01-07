//
// Created by Admin on 07.01.2022.
//

#ifndef JIPP2_LISTNOTE_H
#define JIPP2_LISTNOTE_H

#include "Note.h"
#include "vector"

class ListNote : public Note {
private:
    vector<string> content;
public:
    string getContent() override;

    void setContent(string) override;
};


#endif //JIPP2_LISTNOTE_H
