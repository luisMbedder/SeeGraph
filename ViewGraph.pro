QT += widgets

# Make sure we do not accidentally #include files placed in 'res'
CONFIG += no_include_pwd
CONFIG += console
CONFIG -= app_bundle

SOURCES += $$PWD/src/*.cpp
SOURCES += $$PWD/src/*.h
HEADERS += $$PWD/src/*.h

# set up flags for the compiler and Stanford C++ libraries
QMAKE_CXXFLAGS += -std=c++11 \
    -Wall \
    -Wextra \
    -Wreturn-type \
    -Werror=return-type \
    -Wunreachable-code \



