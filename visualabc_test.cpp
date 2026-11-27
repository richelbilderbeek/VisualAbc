// Tests of the music classes of VisualAbc.
// Each test is a function that starts with 'test', and uses assert to test.
// Built by VisualAbcTest.pro
#include <cassert>
#include <iostream>

#include "musicchord.h"
#include "musicnote.h"

using ribi::Music::Note;

void test_note_from_int_to_int()
{
  assert(Note(0).ToInt() == 0);
  assert(Note(1).ToInt() == 1);
}

void test_note_to_str()
{
  assert(Note(0).ToStr() == "C");
  assert(Note(2).ToStr() == "D");
}

void test_all_notes()
{
  assert(!Note::GetAllNotes().empty());
}

void test_major_chord()
{
  const ribi::Music::ChordMajor chord(Note(0));
  assert(chord.GetName() == "major");
  assert(chord.GetNotes().size() == 3);
}

int main()
{
  test_note_from_int_to_int();
  test_note_to_str();
  test_all_notes();
  test_major_chord();
  std::cout << "All tests passed\n";
}
