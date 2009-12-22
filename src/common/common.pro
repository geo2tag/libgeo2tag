######################################################################
# Automatically generated by qmake (2.01a) Sun Dec 13 13:57:10 2009
######################################################################

TEMPLATE = lib

TARGET = common

DEPENDPATH += . \
              inc \
              src \
              common/inc \
              common/src \
              exception/inc \
              exception/src \
              odbc/inc \
              odbc/src \
              thread/inc \
              thread/src

INCLUDEPATH += . inc common/inc exception/inc thread/inc odbc/inc ../internal/include

# Input
HEADERS += inc/DataMarks.h \
           inc/DbSession.h \
           inc/DefaultException.h \
           inc/GpsInfo.h \
           inc/GpsModeller.h \
           inc/Handle.h \
#           inc/MaemoGps.h \
           inc/Picture.h \
           inc/PngPicture.h \
           inc/pointer.h \
           inc/Channel.h \
           src/ChannelInternal.h \
           src/DataMarkInternal.h \
           common/inc/BitTools.h \
           common/inc/ConstMap.h \
           common/inc/Crc.h \
           common/inc/Elect.h \
           common/inc/Escape.h \
           common/inc/Init.h \
           common/inc/Interval.h \
           common/inc/MemDump.h \
           common/inc/PodPair.h \
           common/inc/Singleton.h \
           common/inc/Sleep.h \
           common/inc/Streamable.h \
           common/inc/Time.h \
           common/inc/toolDefs.h \
           common/inc/TypeInfo.h \
           exception/inc/Exception.h \
           exception/inc/Trace.h \
           odbc/inc/Cache.h \
           odbc/inc/Db.h \
           odbc/inc/DbException.h \
           odbc/inc/DbLock.h \
           odbc/inc/DbQuery.h \
           thread/inc/AtomicCount.h \
           thread/inc/DummySync.h \
           thread/inc/Event.h \
           thread/inc/Lock.h \
           thread/inc/Mutex.h \
           thread/inc/SpinLock.h \
           thread/inc/SwMr.h \
           thread/inc/Thread.h \
           thread/inc/Threading.h \
           thread/inc/WorkerThread.h
SOURCES += src/DataMarks.cpp \
           src/DbSession.cpp \
           src/DefaultException.cpp \
           src/GpsInfo.cpp \
           src/GpsModeller.cpp \
#           src/MaemoGps.cpp \
           src/Picture.cpp \
           src/PngPicture.cpp \
           src/Channel.cpp\
           common/src/BitTools.cpp \
           common/src/Escape.cpp \
           common/src/MemDump.cpp \
           common/src/Time.cpp \
           exception/src/Exception.cpp \
           exception/src/Trace.cpp \
           odbc/src/Db.cpp \
           odbc/src/DbLock.cpp \
           odbc/src/DbQuery.cpp \
           thread/src/Event.cpp \
           thread/src/Mutex.cpp \
           thread/src/SwMr.cpp \
           thread/src/Thread.cpp \
           src/DataMarkInternal.cpp \
           src/ChannelInternal.cpp \

LIBS    += -L../internal/lib -lodbc 
# -llocation -lgconf-2 -ldbus-glib-1 -ldbus-1 -lpthread -lgobject-2.0 -lglib-2.0

QMAKE_CXXFLAGS += -I/usr/include/glib-2.0 -I/usr/lib/glib-2.0/include -I/usr/include/gconf/2 -I/usr/include/dbus-1.0 -I/usr/lib/dbus-1.0/include

DESTDIR = ../internal/lib

OBJECTS_DIR = .obj

MOC_DIR = .moc

DEFINES += NO_MAEMO_GPS
