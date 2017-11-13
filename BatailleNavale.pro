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
    home.cpp \
    shipchoice.cpp

HEADERS  += board.h \
    home.h \
    shipchoice.h

FORMS    += \
    BattleScreen.ui \
    home.ui \
    shipchoice.ui
