#ifndef GAME_H
#define GAME_H

#include <QByteArray>

class Game
{
public:
    const QByteArray START_MSG = "start_message";

    Game();
    QByteArray processMessage(const QByteArray& msg);
};

#endif // GAME_H
