#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include <QTcpSocket>

#include "game.h"

class Server : public QObject, public Game
{
    Q_OBJECT
public:
    explicit Server(QObject *parent = 0);

signals:

private slots:
    void onNewConnection();
    void onReadyRead();

private:
    QTcpServer* m_tcpServer;
    QTcpSocket* m_tcpSocket;
};

#endif // SERVER_H
