rem 
rem TeX to PDF �����X�N���v�g
rem 

SET TEXTFILE=%1

platex %TEXTFILE%
pbibtex %TEXTFILE%
platex %TEXTFILE%
platex %TEXTFILE%
dvipdfmx -z9 -V 7 -o %TEXTFILE%.pdf %TEXTFILE%.dvi
