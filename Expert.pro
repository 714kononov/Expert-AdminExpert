QT       += core gui
QT += sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    abouttovar.cpp \
    chooseexpertiza.cpp \
    contacts.cpp \
    database.cpp \
    finishuser.cpp \
    main.cpp \
    mainwindow.cpp \
    photovideo.cpp

HEADERS += \
    abouttovar.h \
    chooseexpertiza.h \
    contacts.h \
    database.h \
    finishuser.h \
    mainwindow.h \
    photovideo.h

FORMS += \
    abouttovar.ui \
    chooseexpertiza.ui \
    contacts.ui \
    finishuser.ui \
    mainwindow.ui \
    photovideo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
