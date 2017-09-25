#include "Entity.h"

Entity::Entity(){}

Entity::~Entity(){}

Entity::Entity(float x, float y, const char* fileName) //: pos_x(x), pos_y(y)
{
    pos_x = x;
    pos_y = y;
    loadAndSetTexture(fileName);
}

Entity::Entity(float x, float y, const char* fileName, IntRect rect)// : pos_x(x), pos_y(y), entityRect(rect)
{
    pos_x = x;
    pos_y = y;
    loadAndSetTexture(fileName);
    setSpriteRect(rect);
}

void Entity::loadAndSetTexture(const char* fileName)
{
    if(!texture.loadFromFile(fileName))
    {
        return;
    }

    displayable = true;

    entitySprite.setTexture(texture);
}

void Entity::drawEntity(RenderWindow &gameWindow)
{
    if(displayable) gameWindow.draw(entitySprite);
}

//Getters
float Entity::getPos_x()
{
    return pos_x;
}

float Entity::getPos_y()
{
    return pos_y;
}

Sprite Entity::getEntitySprite()
{
    return entitySprite;
}

//Setters
void Entity::setPos_x(float x)
{
    pos_x = x;
}

void Entity::setPos_y(float y)
{
    pos_y = y;
}

void Entity::setSpriteRect(IntRect rect)
{
    entitySprite.setTextureRect(rect);
}
