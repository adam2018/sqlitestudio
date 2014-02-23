#ifndef CLICOMMANDUSE_H
#define CLICOMMANDUSE_H

#include "clicommand.h"

class CliCommandUse : public CliCommand
{
    public:
        static CliCommandUse* create();

        void execute(QStringList args);
        bool validate(QStringList args);
};

#endif // CLICOMMANDUSE_H