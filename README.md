
edb is available under the GPL 2 license, see the COPYING for details.

NOTE: This README now only covers the most essential documentation, for more
complete documentation see the html files in the doc/ directory.

Compiling
---------

Compiling edb is generally quite simple. edb currently depends on the 
following packages:

Qt >= 4.6
boost >= 1.35 (headers only)

Many distributions already have packages that satisify these.

Once you have QT and boost installed, it is as simple as

$ qmake
$ make

This will build the debugger along with all plugins I have written. On certain 
systems your qmake may be named slightly differently, I've noticed that the 
Fedora Core rpms name it qmake-qt4.

If you are planning on doing a make install, you likely want to specify the 
default plugin path, here's how you would do that.

$ qmake -makefile DEFAULT_PLUGIN_PATH="/usr/lib/edb/"
$ make


Installing
----------

Basic installation is simple, you may run

$ make install

Or if you would like to specify where things should go, you probably want to 
use something like this

make INSTALL_ROOT=/usr/ install

In which case the plugins will be installed in /usr/lib/edb and the binaries 
will be installed in /usr/bin/. Finally, if you are doing a make install, you 
probably want to specify a default plugin path, this is done during the qmake 
process.

Generating Symbols
------------------

In order to have edb take advantage of certain features (such as the Heap 
analyzer plugin), it will need some symbol maps to work with. The easiest way 
to create these is to run edb with the --symbols flag, here's an example:

$ ./edb --symbols /lib/libc.so.6 > symbols/libc.so.6.map

The name of the symbol file IS IMPORTANT, a quick and dirty way to get all 
symbols from most existing libraries on your system would be like this:

$ for i in $(ls /lib/*.so* /usr/lib/*.so*); do ./edb --symbols $i > symbols/$(basename $i).map; done

This will take a moment, but not that long and you will have symbols based on 
all libraries on your system. Note that the edb_make_symbolmap script will work 
on regular binaries as well, not just libraries. So if you are debugging an 
application, you may want to generate its symbols as well. Eventually, I will 
build a "Regenerate Symbols" feature into edb (a plugin perhaps?), but for now, 
the script will have to do.

NOTE: as of version 0.8.5 the symbol map format has changed slightly, you will 
need to regenerate your map files.

Also, don't forget to set the symbols directory in the options dialog to the 
directory which you placed the map files!
