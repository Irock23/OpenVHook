#include "NativeInvoker.h"
#include "ScriptEngine.h"

void(*scrNativeCallContext::SetVectorResults)(scrNativeCallContext*) = nullptr; /* Vector3 Pointer Fix*/
