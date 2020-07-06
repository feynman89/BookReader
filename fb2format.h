#ifndef FB2FORMAT_H
#define FB2FORMAT_H

#include <QXmlStreamReader>
#include "ibookformat.h"


class FB2Format : public IBookFormat
{
public:
    FB2Format();
    virtual bool readBook(QFile &bookFile, QString *book, QString *nameAuthor, QString *nameBook) override;
    virtual ~FB2Format();
private:
    QFile book;
};

#endif // FB2FORMAT_H
