#! /bin/bash

rm *.aux *.bbl *.blg *.brf *.log *.out *.synctex.gz main.toc
pdflatex main.tex
bibtex main.aux 
pdflatex main.tex
pdflatex main.tex
