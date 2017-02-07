#include <stdlib.h>
#include <utils/conf.h>

static char *conf_path = "/etc/footpath/footpath.conf";
Conf *global_conf = NULL;

int main(int argc, char** argv)
{
	int ret = 0;

	global_conf = parse_conf(conf_path);

	global_conf->dump();

	delete global_conf;

	return ret;
}
