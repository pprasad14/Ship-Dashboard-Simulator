#ifndef ROLLMETER_H
#define ROLLMETER_H

#include <QWidget>
static int roll_degree;
class Rollmeter : public QWidget
{
    Q_OBJECT
public:
    explicit Rollmeter(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void rotate_roll(int value);
signals:

public slots:

};

#endif // ROLLMETER_H
