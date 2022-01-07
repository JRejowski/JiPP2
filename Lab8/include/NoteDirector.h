//
// Created by Admin on 07.01.2022.
//

#ifndef JIPP2_NOTEDIRECTOR_H
#define JIPP2_NOTEDIRECTOR_H

#include "Note.h"
#include "ListNote.h"
#include "TextNote.h"
#include "iostream"

enum noteTypes {
    TEXTNOTE,
    LISTNOTE
};

class NoteDirector {
private:
    vector<Note *> notesList;
public:
    void addNote(Note *note);

    void addNote(const string &title, const string &content, int type);

    void printNotes();

    void printNote(int index);

    void deleteNote(int index);

    void editNote(int index, string content);

    void clearNotesList();

    ~NoteDirector();
};


#endif //JIPP2_NOTEDIRECTOR_H
