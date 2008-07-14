# Makefile for the UCW Library (c) 1997--2008 Martin Mares <mj@ucw.cz>

DIRS+=ucw
LIBUCW=$(o)/ucw/libucw.pc

ifdef CONFIG_UCW_DBTOOL
PROGS+=$(o)/ucw/db-tool
endif

PROGS+=$(o)/ucw/basecode

LIBUCW_MODS= \
	threads \
	alloc alloc_str realloc bigalloc mempool mempool-str mempool-fmt eltpool \
	mmap pagecache partmap hashfunc \
	lists slists simple-lists bitsig \
	log log-file proctitle \
	conf-alloc conf-dump conf-input conf-intr conf-journal conf-parse conf-section \
	ipaccess \
	profile \
	fastbuf ff-binary ff-string ff-printf ff-unicode \
	fb-file carefulio fb-mem fb-temp fb-mmap fb-limfd fb-buffer fb-grow fb-pool fb-atomic fb-param fb-socket \
	char-cat char-upper char-lower unicode stkstring \
	wildmatch ctmatch regex \
	prime primetable random timer randomkey \
	bit-ffs bit-fls \
	db \
	url \
	mainloop exitstatus runcmd sighandler \
	lizard lizard-safe adler32 \
	md5 sha1 sha1-hmac \
	base64 base224 \
	sync \
	qache \
	string str-esc str-split str-match str-imatch str-hex \
	bbuf \
	getopt

LIBUCW_INCLUDES= \
	lib.h config.h threads.h \
	mempool.h pagecache.h \
	arraysort.h \
	lists.h clists.h slists.h simple-lists.h \
	string.h stkstring.h unicode.h chartype.h regex.h \
	wildmatch.h \
	unaligned.h prefetch.h \
	bbuf.h gbuf.h bitarray.h bitsig.h \
	hashfunc.h hashtable.h \
	heap.h binheap.h binheap-node.h \
	redblack.h \
	binsearch.h \
	bitops.h \
	conf.h getopt.h ipaccess.h \
	profile.h \
	fastbuf.h lfs.h ff-unicode.h ff-binary.h \
	db.h \
	url.h \
	mainloop.h \
	lizard.h \
	md5.h \
	base64.h base224.h \
	qache.h \
	kmp.h kmp-search.h binsearch.h \
	partmap.h

ifdef CONFIG_UCW_THREADS
# Some modules require threading
LIBUCW_MODS+=threads-conf workqueue asio fb-direct
LIBUCW_INCLUDES+=workqueue.h semaphore.h asio.h
endif

ifdef CONFIG_OWN_GETOPT
include $(s)/ucw/getopt/Makefile
endif

include $(s)/ucw/sorter/Makefile

LIBUCW_MOD_PATHS=$(addprefix $(o)/ucw/,$(LIBUCW_MODS))

$(o)/ucw/libucw.a: $(addsuffix .o,$(LIBUCW_MOD_PATHS))
$(o)/ucw/libucw.so: $(addsuffix .oo,$(LIBUCW_MOD_PATHS))

$(o)/ucw/hashfunc.o $(o)/ucw/hashfunc.oo: CFLAGS += -funroll-loops
$(o)/ucw/lizard.o: CFLAGS += $(COPT2) -funroll-loops

$(o)/ucw/db-test: $(o)/ucw/db-test.o $(LIBUCW)
$(o)/ucw/db-tool: $(o)/ucw/db-tool.o $(LIBUCW)
$(o)/ucw/conf-test: $(o)/ucw/conf-test.o $(LIBUCW)
$(o)/ucw/lfs-test: $(o)/ucw/lfs-test.o $(LIBUCW)
$(o)/ucw/hash-test: $(o)/ucw/hash-test.o $(LIBUCW)
$(o)/ucw/hashfunc-test: $(o)/ucw/hashfunc-test.o $(LIBUCW)
$(o)/ucw/asort-test: $(o)/ucw/asort-test.o $(LIBUCW)
$(o)/ucw/redblack-test: $(o)/ucw/redblack-test.o $(LIBUCW)
$(o)/ucw/binheap-test: $(o)/ucw/binheap-test.o $(LIBUCW)
$(o)/ucw/lizard-test: $(o)/ucw/lizard-test.o $(LIBUCW)
$(o)/ucw/kmp-test: $(o)/ucw/kmp-test.o $(LIBUCW) $(LIBCHARSET)
$(o)/ucw/ipaccess-test: $(o)/ucw/ipaccess-test.o $(LIBUCW)
$(o)/ucw/trie-test: $(o)/ucw/trie-test.o $(LIBUCW)
$(o)/ucw/basecode: $(o)/ucw/basecode.o $(LIBUCW)

TESTS+=$(addprefix $(o)/ucw/,regex.test unicode.test hash-test.test mempool.test stkstring.test \
    slists.test kmp-test.test bbuf.test getopt.test fastbuf.test ff-unicode.test eltpool.test \
    fb-socket.test trie-test.test string.test sha1.test asort-test.test binheap-test.test \
    redblack-test.test basecode.test)

$(o)/ucw/regex.test: $(o)/ucw/regex-t
$(o)/ucw/unicode.test: $(o)/ucw/unicode-t
$(o)/ucw/hash-test.test: $(o)/ucw/hash-test
$(o)/ucw/mempool.test: $(o)/ucw/mempool-t $(o)/ucw/mempool-fmt-t $(o)/ucw/mempool-str-t
$(o)/ucw/stkstring.test: $(o)/ucw/stkstring-t
$(o)/ucw/bitops.test: $(o)/ucw/bit-ffs-t $(o)/ucw/bit-fls-t
$(o)/ucw/slists.test: $(o)/ucw/slists-t
$(o)/ucw/kmp-test.test: $(o)/ucw/kmp-test
$(o)/ucw/bbuf.test: $(o)/ucw/bbuf-t
$(o)/ucw/getopt.test: $(o)/ucw/getopt-t
$(o)/ucw/fastbuf.test: $(o)/ucw/fb-file-t $(o)/ucw/fb-grow-t $(o)/ucw/fb-pool-t
$(o)/ucw/ff-unicode.test: $(o)/ucw/ff-unicode-t
$(o)/ucw/eltpool.test: $(o)/ucw/eltpool-t
$(o)/ucw/fb-socket.test: $(o)/ucw/fb-socket-t
$(o)/ucw/string.test: $(o)/ucw/str-hex-t $(o)/ucw/str-esc-t
$(o)/ucw/sha1.test: $(o)/ucw/sha1-t $(o)/ucw/sha1-hmac-t
$(o)/ucw/trie-test.test: $(o)/ucw/trie-test
$(o)/ucw/asort-test.test: $(o)/ucw/asort-test
$(o)/ucw/binheap-test.test: $(o)/ucw/binheap-test
$(o)/ucw/redblack-test.test: $(o)/ucw/redblack-test
$(o)/ucw/basecode.test: $(o)/ucw/basecode

ifdef CONFIG_UCW_THREADS
TESTS+=$(addprefix $(o)/ucw/,asio.test)
$(o)/ucw/asio.test: $(o)/ucw/asio-t
endif

API_LIBS+=libucw
API_INCLUDES+=$(o)/ucw/.include-stamp
$(o)/ucw/.include-stamp: $(addprefix $(s)/ucw/,$(LIBUCW_INCLUDES)) obj/autoconf.h
	$(Q)$(s)/build/install-includes $(<D) run/include/ucw $(LIBUCW_INCLUDES)
	$(Q)$(s)/build/install-includes obj run/include/ucw autoconf.h
	$(Q)touch $@
run/lib/pkgconfig/libucw.pc: $(o)/ucw/libucw.pc

ifdef CONFIG_UCW_PERL
include $(s)/ucw/perl/Makefile
endif

ifdef CONFIG_UCW_SHELL_UTILS
include $(s)/ucw/shell/Makefile
endif