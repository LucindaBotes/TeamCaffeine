<<<<<<< Updated upstream
LATEX_CMD=pdflatex

all: refman.pdf

pdf: refman.pdf

refman.pdf: clean refman.tex
	$(LATEX_CMD) refman
	makeindex refman.idx
	$(LATEX_CMD) refman
	latex_count=8 ; \
	while egrep -s 'Rerun (LaTeX|to get cross-references right)' refman.log && [ $$latex_count -gt 0 ] ;\
	    do \
	      echo "Rerunning latex...." ;\
	      $(LATEX_CMD) refman ;\
	      latex_count=`expr $$latex_count - 1` ;\
	    done
	makeindex refman.idx
	$(LATEX_CMD) refman


clean:
	rm -f *.ps *.dvi *.aux *.toc *.idx *.ind *.ilg *.log *.out *.brf *.blg *.bbl refman.pdf
=======
LATEX_CMD?=pdflatex
MKIDX_CMD?=makeindex
BIBTEX_CMD?=bibtex
LATEX_COUNT?=8
MANUAL_FILE?=refman

all: $(MANUAL_FILE).pdf

pdf: $(MANUAL_FILE).pdf

$(MANUAL_FILE).pdf: clean $(MANUAL_FILE).tex
	$(LATEX_CMD) $(MANUAL_FILE)
	$(MKIDX_CMD) $(MANUAL_FILE).idx
	$(LATEX_CMD) $(MANUAL_FILE)
	latex_count=$(LATEX_COUNT) ; \
	while egrep -s 'Rerun (LaTeX|to get cross-references right|to get bibliographical references right)' $(MANUAL_FILE).log && [ $$latex_count -gt 0 ] ;\
	    do \
	      echo "Rerunning latex...." ;\
	      $(LATEX_CMD) $(MANUAL_FILE) ;\
	      latex_count=`expr $$latex_count - 1` ;\
	    done
	$(MKIDX_CMD) $(MANUAL_FILE).idx
	$(LATEX_CMD) $(MANUAL_FILE)


clean:
	rm -f *.ps *.dvi *.aux *.toc *.idx *.ind *.ilg *.log *.out *.brf *.blg *.bbl $(MANUAL_FILE).pdf
>>>>>>> Stashed changes
