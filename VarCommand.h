//
// Created by shirgold on 25/12/2019.
//

#ifndef ADVANCEDPROGRAMMING_VARCOMMAND_H
#define ADVANCEDPROGRAMMING_VARCOMMAND_H

#include "Command.h"

class VarCommand : public Command {
    virtual int execute(int index);
};


#endif //ADVANCEDPROGRAMMING_VARCOMMAND_H
