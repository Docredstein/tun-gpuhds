.PHONY: all module app clean

all: module app

module:
	$(MAKE) -C module

app:
	$(MAKE) -C app

clean:
	$(MAKE) -C module clean
	$(MAKE) -C app clean