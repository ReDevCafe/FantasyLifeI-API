#ifndef MODAPI_HEADER
#define MODAPI_HEADER

typedef struct ModAPI
{
	void (*Log)					(const char* message);
	void (*RegisterCommand)		(const char* name, void (*callback)());
} ModAPI;

#endif