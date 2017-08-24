#include "client.h"

#include <QHostAddress>

Client::Client(qint16 port, QObject *parent) : QObject(parent)
{
    m_tcpSocket = new QTcpSocket();
    connect(m_tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(onSocketError()));
    connect(m_tcpSocket, SIGNAL(connected()), this, SLOT(onConnected()));
    connect(m_tcpSocket, SIGNAL(disconnected()), this, SLOT(onDisconnected()));
    connect(m_tcpSocket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
    m_tcpSocket->connectToHost(QHostAddress("127.0.0.1"), port);
}

void Client::onSocketError()
{
    qDebug() << "client error!";
}

void Client::onConnected()
{
    qDebug() << "connected!";
}

void Client::onDisconnected()
{
    qDebug() << "disconnected!";
}

void Client::onReadyRead()
{
    auto msg = m_tcpSocket->readAll();
    qDebug() << "received msg =" << msg;
    auto response = processMessage(msg);
    m_tcpSocket->write(response);
}
