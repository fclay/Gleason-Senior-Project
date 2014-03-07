#ifndef PREDICTCALLBACK_H
#define PREDICTCALLBACK_H

#include <presage.h>

class PredictCallback : public PresageCallback
{
public:
    PredictCallback(const std::string& _past_context) : past_context(_past_context) { }


    std::string get_past_stream() const { return past_context; }
    std::string get_future_stream() const { return empty; }

private:
    const std::string& past_context;
    const std::string empty;

};

#endif // PREDICTCALLBACK_H
