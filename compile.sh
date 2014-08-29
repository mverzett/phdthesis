#! /bin/bash

if [ "$1" = "fast" ]; then
    pdflatex main.tex    
elif [ "$1" = "bib" ]; then
    bibtex main.aux 
    pdflatex main.tex    
else
    rm *.aux *.bbl *.blg *.brf *.log *.out *.synctex.gz main.toc
    pdflatex main.tex
    bibtex main.aux 
    pdflatex main.tex
    pdflatex main.tex
fi

