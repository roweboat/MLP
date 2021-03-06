#include "table.h"


Table::Table()
  : MegunoLinkProtocol(F("TABLE"))
{

}

void Table::SetDescription(const char *RowName, const char *Description)
{
  SendDataHeader(F("DESCRIPTION"));
  Serial.print(RowName);
  Serial.print('|');
  Serial.print(Description);
  SendDataTail();
}

void Table::SetDescription(const __FlashStringHelper *RowName, const char *Description)
{
  SendDataHeader(F("DESCRIPTION"));
  Serial.print(RowName);
  Serial.print('|');
  Serial.print(Description);
  SendDataTail();
}

void Table::SetDescription(const __FlashStringHelper *RowName, const __FlashStringHelper *Description)
{
  SendDataHeader(F("DESCRIPTION"));
  Serial.print(RowName);
  Serial.print('|');
  Serial.print(Description);
  SendDataTail();
}

void Table::ClearAllRows()
{
  SendDataHeader(F("CLEAR"));
  SendDataTail();
}

void Table::ClearRow(const char *Name)
{
  SendDataHeader(F("CLEAR"));
  Serial.print(Name);
  SendDataTail();
}

void Table::ClearRow(const __FlashStringHelper *Name)
{
  SendDataHeader(F("CLEAR"));
  Serial.print(Name);
  SendDataTail();
}

void Table::GetData(const char *Name)
{
  SendDataHeader(F("GET"));
  Serial.print(Name);
  SendDataTail();
}

void Table::GetData(const __FlashStringHelper *Name)
{
  SendDataHeader(F("GET"));
  Serial.print(Name);
  SendDataTail();
}
