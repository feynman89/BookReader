#include "fb2format.h"


FB2Format::FB2Format()
{

}

bool FB2Format::readBook(QFile &bookFile, QString *book, QString *nameBook, QString *nameAuthor)
{
    // TODO написать парсер
    book = new QString("Normal work");
    return true;
}


FB2Format::~FB2Format()
{

}
