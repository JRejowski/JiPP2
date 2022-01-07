//
// Created by Admin on 07.01.2022.
//

#include "NoteDirector.h"

int main() {
    auto noteDirector = new NoteDirector;
    noteDirector->addNote("pierwsza notatka", "Pierwsza notatka jest tu", TEXTNOTE);
    auto listNote = new ListNote;
    listNote->setTitle("Notatka listowa");
    listNote->setContent("Zawartość\nlinia1\nlinia2\nlinia3");
    noteDirector->addNote(listNote);
    noteDirector->addNote("trzecia notatka", "Trzecia notatka jest tu", TEXTNOTE);
    noteDirector->printNotes();
    noteDirector->deleteNote(1);
    noteDirector->printNotes();
    noteDirector->editNote(1, "nowa zawartość");
    noteDirector->printNotes();
    noteDirector->clearNotesList();
    noteDirector->printNotes();
    delete (noteDirector);
    return 0;
}