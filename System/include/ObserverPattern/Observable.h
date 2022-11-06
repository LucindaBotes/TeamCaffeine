#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include <ObserverPattern/ActionListener.h>
#include <vector>

class Observable {
    private:
        int member;
    public:
        Observable();
        ~Observable();
        int getMember();
        void setMember(int);
        virtual void addListener(ActionListener * listener) = 0;
        virtual void removeListener(ActionListener * listener) = 0;
        virtual void notifyListeners() = 0;
};
#endif