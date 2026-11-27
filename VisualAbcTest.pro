# Tests of the music classes of VisualAbc, without a test framework
include(Music.pri)

SOURCES += visualabc_test.cpp

CONFIG += console c++17
CONFIG -= app_bundle
QT -= core gui
QMAKE_CXXFLAGS += -Wall -Wextra -Werror
