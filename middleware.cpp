#include "middleware.h"


void Middleware::initPresage()
{
    Middleware::context = new std::string();
    Middleware::callback = new PredictCallback(*Middleware::context);
    Middleware::predictEngine = new Presage(Middleware::callback);
}

std::vector<std::string> Middleware::doPrediction()
{

    Middleware::returnStuff = Middleware::predictEngine->predict();


    return Middleware::returnStuff;
}

