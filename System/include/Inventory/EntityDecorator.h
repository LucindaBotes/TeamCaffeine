#ifndef ENTITYDECORATOR_H
#define ENTITYDECORATOR_H

class EntityDecorator {
  private:
    int member;

  public:
    EntityDecorator();
    ~EntityDecorator();
    int getMember();
    void setMember(int);
};

#endif
