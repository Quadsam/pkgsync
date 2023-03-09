bin_PROGRAMS			= pkgsync
pkgsync_SOURCES			= main.c
AM_CFLAGS				= -march=x86-64 -mtune=generic -O2 -pipe -fno-plt -fexceptions -Wp,-D_FORTIFY_SOURCE=2 -Wall -Wformat -Werror=format-security -pedantic -fstack-clash-protection -fcf-protection
AM_LDFLAGS				= -Wl,-O1,--sort-common,--as-needed,-z,relro,-z,now
AM_DEFAULT_VERBOSITY	= 0
