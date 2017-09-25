#ifndef ENTITY_H_INCLUDED
#define ENTITY_H_INCLUDED

#include <SFML/Graphics.hpp>

using namespace sf;

class Entity
{
  protected:

      float pos_x, pos_y;

      bool displayable;

      Sprite entitySprite;

      IntRect entityRect;

  private:

      Texture texture;

  public:

    Entity();

    Entity(float x, float y, const char* fileName);

    Entity(float x, float y, const char* fileName, IntRect rect);

   ~Entity();

    virtual void loadAndSetTexture(const char* fileName);

    virtual void drawEntity(RenderWindow &gameWindow);

    //Getters
    float getPos_x();

    float getPos_y();

    Sprite getEntitySprite();

    //Setters
    void setPos_x(float x);

    void setPos_y(float y);

    void setSpriteRect(IntRect rect);
};


#endif // ENTITY_H_INCLUDED
