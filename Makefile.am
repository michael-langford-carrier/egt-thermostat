AUTOMAKE_OPTIONS = subdir-objects

CUSTOM_CXXFLAGS = $(WARN_CFLAGS) \
	-I$(top_srcdir)/src \
	$(LIBEGT_CFLAGS)

CUSTOM_LDADD = $(LIBEGT_LIBS)

AM_CXXFLAGS = -DDATADIR=\"$(datadir)\"

bin_PROGRAMS = egt-thermostat

egt_thermostat_SOURCES = src/thermostat.cpp

egt_thermostat_CXXFLAGS = $(CUSTOM_CXXFLAGS) $(AM_CXXFLAGS)
egt_thermostat_LDADD = $(CUSTOM_LDADD) -ldl
egt_thermostatdir = $(prefix)/share/egt/thermostat
egt_thermostat_LDFLAGS = $(AM_LDFLAGS)
