# $Id: Makefile,v 1.1 2002-06-05 13:15:55 m Exp $
SHELL=/bin/sh
SRC= cppl-ex.tex \
	 cppl-ex.bib

all: cppl-ex.tex cppl-ex.pdf cppl-ex.dvi cppl-ex.ps

cppl-ex.tex: doc.tex
	lgrind -e -t 4 -l cc doc.tex > cppl-ex.tex

cppl-ex.pdf: ${SRC}
	pdflatex cppl-ex.tex
	makeindex cppl-ex.idx
	pdflatex cppl-ex.tex
	bibtex cppl-ex
	pdflatex cppl-ex.tex
	pdflatex cppl-ex.tex

cppl-ex.dvi: ${SRC}
	latex cppl-ex.tex
	makeindex cppl-ex.idx
	latex cppl-ex.tex
	bibtex cppl-ex
	latex cppl-ex.tex
	latex cppl-ex.tex

cppl-ex.ps: cppl-ex.dvi
	dvips -PcZ -t a4 cppl-ex.dvi -o cppl-ex.ps

.PHONY: edit
edit:
	gvim doc.tex cppl-ex.bib Makefile

.PHONY: clean
clean::
	rm -f cppl-ex.pdf cppl-ex.tex

.PHONY: clean-all
clean-all::
	rm -f cppl-ex.aux cppl-ex.bbl cppl-ex.blg cppl-ex.idx cppl-ex.ilg \
		cppl-ex.ind  cppl-ex.log cppl-ex.out cppl-ex.pdf cppl-ex.tex
