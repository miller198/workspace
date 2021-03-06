#ifndef WIDGET_H
#define WIDGET_H

#include <QGraphicsEffect>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>

class Widget : public QGraphicsView
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

private:
    void setupScene();

private:
    QGraphicsScene m_scene;
    QGraphicsOpacityEffect *m_effect;

};

#endif // WIDGET_H
