
include Makefile-env.am
include utils/Makefile.am
include src/Makefile.am

clean-local:
	find . '(' -name '*.o' -o -name '*.pyc' \
		-o -name '*.la' -o -name '*.lo' \
		-o -name '*.Po' -o -name 'Makefile' \
		-o -name '*.Plo' \
		')' -exec rm -rf {} \;
