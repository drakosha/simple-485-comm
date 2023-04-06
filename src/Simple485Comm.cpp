#include "Simple485Comm.h"

Simple485Comm::Simple485Comm(Stream &serial) : Simple485Comm(serial, 0) {}

Simple485Comm::Simple485Comm(Stream &serial, uint8_t address) : _serial(serial) {
  _serial = serial;
  _serial.setTimeout(0);
}

void Simple485Comm::task() {

}