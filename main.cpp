#include <nan.h>

NAN_METHOD(GetVolumeSessions) {
  
  return;
}

NAN_MODULE_INIT(Initialize) {
  NAN_EXPORT(target, GetVolumeSessions);
}

NODE_MODULE(addon, Initialize);