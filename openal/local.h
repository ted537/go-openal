#ifdef __APPLE__
#include<OpenAL/al.h>
#include<OpenAL/alc.h>
#else
#define AL_LIBTYPE_STATIC
#include<AL/al.h>
#include<AL/alc.h>
#endif
