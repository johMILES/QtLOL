#include "softbackfile.h"
#include <QDateTime>

SoftbackFile::SoftbackFile(const QString &name):QFile(name)
{

}

qint32 SoftbackFile::WriteBackFile(const char *data, const qint32 length)
{
    char  *buff = new char[sizeof(MyHeader) + length];
    return length;
}
