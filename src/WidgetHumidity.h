#ifndef WIDGET_HUMIDITY_H_
#define WIDGET_HUMIDITY_H_

#include "application.h"


class WidgetHumidity
{
public:
    WidgetHumidity(uint8_t ucItem = 0);
    ~WidgetHumidity();
    void begin(void (*UserCallBack)(void) = NULL);
    void displayHumidity(uint8_t humidity);

private:
    char pDataHumidityTopic[64];
    uint8_t _Item=0;         
};

#endif
