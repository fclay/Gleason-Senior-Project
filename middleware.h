#ifndef MIDDLEWARE_H
#define MIDDLEWARE_H
#include <presage.h>
#include "PredictCallback.h"

class Middleware
{
public:

    std::vector<std::string> doPrediction();
    void initPresage();
    ~Middleware();

    std::string *context;
    PredictCallback* callback;
    std::vector< std::string > returnStuff;
    Presage* predictEngine;
};

#endif // MIDDLEWARE_H
