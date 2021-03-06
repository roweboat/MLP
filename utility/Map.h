#pragma once
#include "MegunoLinkProtocol.h"

class Map : protected MegunoLinkProtocol
{
public:
  Map();

  void SendData(const char *Placename, const char *Latitude, const char *Longitude);
  void SendData(const __FlashStringHelper *Placename, const char *Latitude, const char *Longitude);

  void SendData(const char *Placename, float Latitude, float Longitude);
  void SendData(const __FlashStringHelper *Placename, float Latitude, float Longitude);
};

