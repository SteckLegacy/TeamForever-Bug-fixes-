#if defined(PS3)
#include <stdio.h>
#include <stdarg.h>

#if defined(__GNUC__) && (__GNUC__ < 13)
#ifdef __cplusplus
extern "C" {
#endif

int snprintf(char *str, size_t size, const char *format, ...);
int vsnprintf(char *str, size_t size, const char *format, va_list ap);

#ifdef __cplusplus
}
#endif
#endif

#endif // PS3
