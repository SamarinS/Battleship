#include "server.h"
#include "client.h"
#include <QCoreApplication>

void printUsage()
{
    qWarning() << "usage:";
    qWarning() << "    MB server";
    qWarning() << "    MB client <port>";
}

int main(int argc, char *argv[])
{
/*
MyField F1;
F1.init();
F1.output();
cout << endl;
F1.shot(15);
F1.shot(20);
F1.shot(59);
F1.shot(74);
F1.shot(114);
F1.output();
//bool a=quas();
    return 0;
*/

    QCoreApplication app(argc, argv);

    Server* server;
    Client* client;

    if (argc < 2) {
        printUsage();
        return 1;
    }

    if (argv[1] == QString("server")) {
        server = new Server();
    } else if (argv[1] == QString("client")) {
        qint16 port = QString(argv[2]).toInt();
        client = new Client(port);
    } else {
        printUsage();
        return 1;
    }

    return app.exec();
}
