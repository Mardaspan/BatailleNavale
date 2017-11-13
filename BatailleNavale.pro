#-------------------------------------------------
#
# Project created by QtCreator 2017-11-12T23:39:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BatailleNavale
TEMPLATE = app


SOURCES += main.cpp\
        board.cpp \
    ship.cpp \
    carrier.cpp \
    battleship.cpp \
    cruiser.cpp \
    submarine.cpp \
    destroyer.cpp

HEADERS  += board.h \
    ship.h \
    carrier.h \
    battleship.h \
    cruiser.h \
    submarine.h \
    destroyer.h

FORMS    += board.ui
