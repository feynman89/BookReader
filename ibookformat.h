#ifndef IBOOKFORMAT_H
#define IBOOKFORMAT_H

#include <QFile>
#include <QPair>
#include <QDebug>
#include <QString>

class IBookFormat
{
public:
    virtual bool readBook(QFile &bookFile, QString *book, QString *nameAuthor, QString *nameBook) = 0;
    virtual ~IBookFormat() {};
};

#endif // IBOOKFORMAT_H
