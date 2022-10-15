#ifndef ENTITYCREATOR_H
#define ENTITYCREATOR_H

class EntityCreator {
  private:
    int member;

  public:
    EntityCreator();
    ~EntityCreator();
    int getMember();
    void setMember(int);
};

#endif
