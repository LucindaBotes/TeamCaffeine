#ifndef OBSERVABLE_H
#define OBSERVABLE_H

#include "ActionListener.h"
#include <vector>

class Observable {
    private:
        int member;
    
    protected:
        std::vector<ActionListener*> listeners;
    
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