#ifndef PITCHMETER_H
#define PITCHMETER_H

#include <QWidget>
static int pitch_degree;
class Pitchmeter : public QWidget
{
    Q_OBJECT
public:
    explicit Pitchmeter(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void rotate_pitch(int value);
signals:

public slots:

};

#endif // PITCHMETER_H
