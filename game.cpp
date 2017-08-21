#include "game.h"

#ifdef Q_WS_WIN
#include <windows.h>
#else // linux
#include <unistd.h>
#endif

#include <stdlib.h>

static void sleep1ms()
{
#ifdef Q_WS_WIN
    Sleep(1000); // 1000 milliseconds
#else // linux
    sleep(1); // 1 second
#endif
}

Game::Game()
{

}

QByteArray Game::processMessage(const QByteArray &msg)
{
    // todo: implement this function

    QByteArray response;

    if (msg == START_MSG) {
        // the first player
        // need to send initial message to another player
    }

    // temporary code
    sleep1ms();
    response = "#message#";

    return response;
}
