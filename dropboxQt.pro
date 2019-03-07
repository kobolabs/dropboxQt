QT += network xml
QT -= gui
CONFIG += staticlib c++11
CONFIG -= flat
TEMPLATE = lib
TARGET = dropboxQt

API_MODULES = async auth files properties sharing team team_common team_policies users endpoint
SRC_DIR = $$PWD/src
API_DIR = $${SRC_DIR}/dropbox

for(m, API_MODULES){
	d = $${API_DIR}/$${m}
	exists($${d}){
		HEADERS += $$files($${d}/*.h, true)
		SOURCES += $$files($${d}/*.cpp, true)
	}
}

HEADERS += $$files($${API_DIR}/*.h, false)
SOURCES += $$files($${API_DIR}/*.cpp, false)

INCLUDEPATH += $${SRC_DIR}
