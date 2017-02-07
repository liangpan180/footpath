#include <utils/conf.h>
#include <iostream>
using namespace std;

Conf* parse_conf(char* conf_file)
{
	Conf *conf = new Conf(conf_file);

	return conf;
}

void Conf::dump()
{
	cout << "name:" << name << endl;
}
