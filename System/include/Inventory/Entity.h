#ifndef ENTITY_H
#define ENTITY_H

class Entity {
  private:
    int member;

  public:
    Entity();
    ~Entity();
    int getMember();
    void setMember(int);
};

#endif
