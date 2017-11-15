/*
************************************************************************
* 作者:  IntoRobot Team 
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
湿度计：检测环境湿度

所需器件:
1. DHT11 温湿度传感器模块

接线说明
DHT11          核心板
VCC            3V3
GND            GND
DATA           D0
*/


#include <IntoRobot_DHT.h>
#include <WidgetHumidity.h>

#define DHT_TYPE   DHT11
#define DHT11_PIN  D0

IntoRobot_DHT dht11(DHT11_PIN,DHT_TYPE);
WidgetHumidity humidity = WidgetHumidity();

void setup()
{
    dht11.begin(); //初始化
}

void loop()
{
    humidity.displayHumidity(dht11.getHumidity()); //上送湿度
    delay(3000);
}
