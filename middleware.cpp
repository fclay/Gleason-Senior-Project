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

std::string Middleware::doCompletion(std::string inString)
{
    std::string outString = predictEngine->completion(inString);
    return outString;
}

void Middleware::chNumSugg(std::string num)
{
    std::string str1 = "Presage.Selector.SUGGESTIONS";
    predictEngine->config(str1, num);
}
