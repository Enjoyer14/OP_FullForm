QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Date.cpp \
    Hotel.cpp \
    addwindow.cpp \
    dialog.cpp \
    hdata.cpp \
    main.cpp \
    mainwindow.cpp \
    printwindow.cpp

HEADERS += \
    Date.h \
    Hotel.h \
    addwindow.h \
    dialog.h \
    hdata.h \
    mainwindow.h \
    printwindow.h

FORMS += \
    addwindow.ui \
    dialog.ui \
    mainwindow.ui \
    printwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Hotel.txt
