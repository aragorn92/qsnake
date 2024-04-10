#ifndef GAME_H
#define GAME_H

#include <QObject>
#include <QWidget>
class GameField;
class Snake;
class SnakeItem;
class game
{
public:
    game();
};
class GameField:QWidget{
Q_OBJECT
public:
    GameField();
};
#endif // GAME_H
