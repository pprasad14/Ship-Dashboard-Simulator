#ifndef LOGMETER_H
#define LOGMETER_H

#include <QWidget>
#include <QUdpSocket>
static int degree;
class Logmeter : public QWidget
{
    Q_OBJECT
public:
    explicit Logmeter(QWidget *parent = 0);

    QUdpSocket *socket;

    void rotate_niddle(int degree);
    int alarm();
private:
    void paintEvent(QPaintEvent *);
signals:

public slots:


};

#endif // LOGMETER_H
