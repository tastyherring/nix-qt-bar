#include "include/QtBar/QtBar.h"
#include <QTimer>
#include <chrono>

QtBar::QtBar(QObject *parent)
    :
    QObject{parent},
    timer_{parent},
    message_{"hello world"}
{
    QObject::connect(&timer_, &QTimer::timeout, [this]()
    {
        emit greeting(message_);
    });
    timer_.start(std::chrono::seconds(1));
}

void QtBar::setMessage(const QString &message)
{
    message_ = message;
};