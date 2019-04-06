#ifndef CHECKSUM_H
#define CHECKSUM_H

#include <QMainWindow>

class CheckSum : public QMainWindow
{
    Q_OBJECT
public:
    explicit CheckSum(QWidget *parent = 0);
    int getCheckSum(char *s);

signals:

public slots:

};

#endif // CHECKSUM_H
