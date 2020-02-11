QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    dialerui.cpp \
    myaddressbookmodel.cpp

HEADERS += \
    dialerui.h \
    myaddressbookmodel.h

FORMS += \
    dialerui.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    #.png \
    #.png \
    0.png \
    1.png \
    2.png \
    3.png \
    4.png \
    5.png \
    6.png \
    7.png \
    8.png \
    9.png \
    _.png \
    hash.png \
    images/0.png \
    images/1.png \
    images/2.png \
    images/3.png \
    images/4.png \
    images/5.png \
    images/6.png \
    images/7.png \
    images/8.png \
    images/9.png \
    images/hash.png \
    images/star.png \
    star.png

RESOURCES += \
    dialerResource.qrc \
    dialerResource.qrc
