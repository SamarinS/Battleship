#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QTcpSocket>

#include "game.h"

class Client : public QObject, public Game
{
    Q_OBJECT
public:
    explicit Client(qint16 port, QObject *parent = 0);

signals:

private slots:
    void onSocketError();
    void onConnected();
    void onDisconnected();
    void onReadyRead();

private:
    QTcpSocket* m_tcpSocket;
};

#endif // CLIENT_H
