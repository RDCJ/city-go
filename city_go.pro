TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Astar.cpp \
        Data.cpp \
        Greedy.cpp \
        State.cpp \
        main.cpp

HEADERS += \
    Astar.h \
    Data.h \
    Greedy.h \
    State.h

DISTFILES += \
    data.in

RESOURCES += \
    data.qrc
