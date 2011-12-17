TEMPLATE = lib

include(../../config.pri)

TARGET = ../lib/common
target.path = /usr/lib

INSTALLS += target

DEPENDPATH += . \
    inc \
    src

INCLUDEPATH += . \
    inc \


CONFIG += mobility
MOBILITY = location


# Input
HEADERS += \
    inc/ConcurrentVector.h \
    inc/TimeSlot.h \
    inc/Channel.h \
    inc/User.h \
    inc/DataMarks.h \
    inc/GpsInfo.h \
    inc/defines.h \
    inc/DataChannel.h\
    inc/TimeSlot.h \
    inc/ChannelAction.h\
    inc/DataMarks.h \
    inc/ErrnoTypes.h \
    inc/Filtration.h \
    inc/Filter.h \
    inc/ShapeFilter.h \
    inc/TimeFilter.h \
	inc/AltitudeFilter.h \    
    inc/FShape.h \
    inc/FShapeCircle.h

SOURCES += \
    src/TimeSlot.cpp \
    src/Channel.cpp \
    src/User.cpp \
    src/ChannelAction.cpp \
    src/GpsInfo.cpp \ 
    src/DataMarks.cpp \
    src/defines.cpp \
    src/ErrnoTypes.cpp \
    src/Filtration.cpp \
    src/ShapeFilter.cpp \
    src/TimeFilter.cpp \
	src/AltitudeFilter.cpp \    
    src/FShapeCircle.cpp

linux: {
    HEADERS += inc/GpsModeller.h

    SOURCES += src/GpsModeller.cpp

    QT -= gui
    LIBS += -lxml2

    DEFINES += SIMULATE_GPS


    INCLUDEPATH += /usr/local/include/libxml2
}

maemo5: {

    HEADERS += inc/MobilityGps.h

    SOURCES += src/MobilityGps.cpp
    LIBS += -lQtLocation
}


webside: {
    HEADERS += inc/GpsModeller.h

    SOURCES += src/GpsModeller.cpp

    LIBS += -lxml2 -lodbc

    DEFINES += NO_GPS SIMULATE_GPS
}
