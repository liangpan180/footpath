#ifndef _CONF_H_
#define _CONF_H_
#include <stdio.h>

class Conf {
private:
	char *name;
public:
	Conf() : name(NULL) {};
	Conf(char *name) : name(name) {}
	void dump();
	~Conf() {};
};

Conf* parse_conf(char* conf_file);

#endif
