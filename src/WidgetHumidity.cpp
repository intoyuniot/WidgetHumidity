
#include "WidgetHumidity.h"


WidgetHumidity::WidgetHumidity(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataHumidityTopic,0,sizeof(pDataHumidityTopic));
    sprintf(pDataHumidityTopic,"channel/humidity_%d/data/humidity",_Item);
}

WidgetHumidity::~WidgetHumidity()
{
}

void WidgetHumidity::begin(void (*UserCallBack)(void))
{
}

void WidgetHumidity::displayHumidity(uint8_t humidity)
{
	IntoRobot.publish(pDataHumidityTopic,humidity);
}









