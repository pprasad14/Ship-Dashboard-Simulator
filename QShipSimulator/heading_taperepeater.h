#ifndef HEADING_TAPEREPEATER_H
#define HEADING_TAPEREPEATER_H

#include <QMainWindow>

class Heading_TapeRepeater : public QMainWindow
{
    Q_OBJECT
public:
    explicit Heading_TapeRepeater(QWidget *parent = 0);
signals:

public slots:
    QString generateNMEA(QString id,double course);

};

#endif // HEADING_TAPEREPEATER_H
