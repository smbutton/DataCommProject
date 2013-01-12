#ifndef IMAP_H
#define IMAP_H
#include <iostream>
#include <cstdlib>

#include "LogoutCommand.h"
class imap
{
    public:
        imap();
        virtual ~imap();
        int main();

    protected:
    private:
        LogoutCommand q;
        void helpCommand();

};

#endif // IMAP_H
