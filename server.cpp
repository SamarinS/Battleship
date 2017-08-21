#include "server.h"

Server::Server(QObject *parent) : QObject(parent), m_tcpSocket(nullptr)
{
    m_tcpServer = new QTcpServer(this);
    connect(m_tcpServer, &QTcpServer::newConnection, this, &Server::onNewConnection);
    if (!m_tcpServer->listen()) {
        qWarning() << tr("Unable to start the server: %1.").arg(m_tcpServer->errorString());
        return;
    }

    qDebug() << tr("the server is running on port %1").arg(m_tcpServer->serverPort());
}

void Server::onNewConnection()
{
    qDebug() << "on new connection";
    m_tcpSocket = m_tcpServer->nextPendingConnection();
    connect(m_tcpSocket, &QAbstractSocket::disconnected,
            m_tcpSocket, &QObject::deleteLater);
    connect(m_tcpSocket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));

    m_tcpSocket->write(START_MSG);
}

void Server::onReadyRead()
{
    auto msg = m_tcpSocket->readAll();
    qDebug() << "received msg =" << msg;
    auto response = processMessage(msg);
    m_tcpSocket->write(response);
}
