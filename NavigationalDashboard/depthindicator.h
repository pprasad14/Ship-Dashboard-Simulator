#ifndef DEPTHINDICATOR_H
#define DEPTHINDICATOR_H

#include <QWidget>

class DepthIndicator : public QWidget
{
    Q_OBJECT
public:
    explicit DepthIndicator(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
signals:

public slots:

};

#endif // DEPTHINDICATOR_H
