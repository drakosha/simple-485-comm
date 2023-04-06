#ifndef __SIMPLE_485_COMM_H
#define __SIMPLE_485_COMM_H

#include <Stream.h>

class Simple485Comm {
  public:
    Simple485Comm(Stream &serial);
    Simple485Comm(Stream &serial, uint8_t address);
    void task();
  private:
    uint8_t _address;
    Stream & _serial;

};

#endif