#
#    $Id$
#

release: clean
	zip -r -9 -I svn/zip !SVN Licences ReadMe_Upgrading source convertfiletypes -x */svn*
	make -C pkg

.PHONY: clean release


clean:
	-rm -rf svn.zip
	make -C pkg clean
