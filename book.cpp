#include "book.h"

const QPair<QString &, QString &> Book::getBookInformation()
{
    return QPair<QString&, QString&>(nameBook, nameAuthor);
}

bool Book::openBook()
{
    return m_book.exists();
}

const QString& Book::getText()
{
    if(openBook())
    {
        if(m_format->readBook(m_book, m_text, &nameBook, &nameAuthor))
            return *m_text;
    }
    qDebug() << "Somthing went wrong";
    return "";
}

Book::~Book()
{
    delete m_format;
}
