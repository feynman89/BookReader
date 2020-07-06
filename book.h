#ifndef BOOK_H
#define BOOK_H

#include "ibookformat.h"
#include "fb2format.h"

class Book
{
public:
    Book() = delete;

    explicit Book(QString path, IBookFormat *format) :
        m_path{path}, m_format{format}, m_book{path} {}

    const QPair<QString&, QString&> getBookInformation();

    bool openBook();
    const QString& getText();
    ~Book();

private:
    QString nameBook;
    QString nameAuthor;
    QString *m_text;
    QString m_path;
    IBookFormat *m_format;
    QFile m_book;
};

#endif // BOOK_H
