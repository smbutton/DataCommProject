#ifndef LOGOUTCOMMAND_H
#define LOGOUTCOMMAND_H
#include <iostream>
#include "Command.h"

class LogoutCommand: public Command
{
    public:
        virtual void Execute();
    protected:
    private:
};

#endif // LOGOUTCOMMAND_H
