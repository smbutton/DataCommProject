#ifndef NEXTCOMMAND_H
#define NEXTCOMMAND_H

#include <iostream>
#include "Command.h"

class NextCommand: public Command
{
    public:

        virtual void Execute();
    protected:
    private:
};

#endif // NEXTCOMMAND_H
