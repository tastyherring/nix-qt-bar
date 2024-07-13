#include <QObject>
#include <QTimer>
class QtBar: public QObject
{
Q_OBJECT
public:
    explicit QtBar(QObject *parent = nullptr);

public slots:
    void setMessage( const QString &message );

signals:
    void greeting( const QString &message );

private:
    QString message_;
    QTimer timer_;
};