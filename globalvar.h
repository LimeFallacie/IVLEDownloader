//A designed .h file to create all possible global variables required in the code.
#ifndef GLOBALVAR_H
#define GLOBALVAR_H

#include <QString>
#include <QSettings>
#include <QVariant>


    extern QString APIKEY;//An API key uses the "extern" keyword to be stored as a global variable
    extern QString DIRECTORY;
    extern QString TOKEN;
class GLOBALVARIABLES: public QObject
{
    Q_OBJECT
public:


};

#endif // GLOBALVAR_H
