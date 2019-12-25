//
// Created by eliadsellem on 12/10/19.
//

#ifndef ADVANCED__COMMANDS_H_
#define ADVANCED__COMMANDS_H_

#include <sys/socket.h>
#include <unordered_map>
#include "Obj.h"
#include <unistd.h>
#include <netinet/in.h>
#include <thread>
#include <arpa/inet.h>
#include <condition_variable>
#include <vector>
#include <iostream>
#include <cstring>
#include <map>
#include <regex>
#include "ex1.h"
using namespace std;
class Command {
public:

    virtual int execute(int index) = 0;

    float calculateExpression(unordered_map<string, Obj *> &STObjMap, const string &e);

    virtual ~Command() {}

    unordered_map<string, Command *> &getCommandMap();

    unordered_map<string, Obj *> &getSTSimulatorMap();

    vector<string> &getArray();

    unordered_map<string, Obj *> &getSTObjMap();

};


#endif //ADVANCED__COMMANDS_H_